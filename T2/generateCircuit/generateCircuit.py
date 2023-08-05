import copy

def process_backend_comment(lines):
    for i in range(len(lines)):
        if lines[i].startswith('//'):
            continue
        comment_pos = lines[i].find('//')
        if comment_pos != -1:
            lines[i] = lines[i][:comment_pos]

def getToken(lines):
    token = []
    for line in lines:
        line = line.strip()
        if line.startswith('//') or line.startswith('#'):
            continue
        line = line.strip()
        line = line.replace('=', ' ')
        line = line.replace('+', ' ')
        line = line.replace('*', ' ')
        line = line.replace(';', ' ')
        line = line.replace('QAND_INV(', ' ')
        line = line.replace('QAND(', ' ')
        line = line.replace(')', ' ')
        line = line.replace(',', ' ')
        tokens = line.split(' ')
        tokens = [x for x in tokens if x != '' and x != '1']
        for x in tokens:
            token.append(x)
    token = sorted(list(set(token)))
    return token

def token2Dict(tokens):
    res = {}
    for token in tokens:
        name = token.split('[')[0]
        idx = token.split('[')[1].split(']')[0]
        res[token] = [name, int(idx)]
    return res

def sBoxExpand(lines, tokenDict, cnt):
    expandLines = []
    for line in lines:
        if line.startswith('//'):
            if line.startswith('//d'):
                expandLines.append(copy.deepcopy(line))
        elif line.startswith('\n') or line == '':
            pass
        else:
            if line.startswith('QAND'):
                token_list = [x.strip() for x in line.split('(')[1].split(')')[0].split(',')]
                line = token_list[2] + ' = ' + token_list[2] + '+' + token_list[0] + '*' + token_list[1] + ';'
            else:
                line = line.replace('+', ' ')
                line = line.replace('=', ' ')
                line = line.replace(';', ' ')
                token_list = [x.strip() for x in line.split(' ') if x != '']
                line = token_list[0] + ' = ' + token_list[1] + '+' + token_list[2] + ';'
            for i in range(cnt):
                curLine = line.strip()
                for key, value in tokenDict.items():
                    if value[0] == 'U':
                        new_var = 'X1[%d]' % (value[1] + i * 8)
                    elif value[0] == 'S':
                        new_var = value[0] + '[' + '%d' % (value[1] + i * 8) + ']'
                    elif value[0] == 'Y':
                        new_var = value[0] + '[' + '%d' % (value[1] + i * 21) + ']'
                    elif value[0] == 'T':
                        new_var = value[0] + '[' + '%d' % (value[1] + i * 50) + ']'
                    elif value[0] == 'z':
                        new_var = value[0] + '[' + '%d' % (value[1] + i * 18) + ']'
                    elif value[0] == 'F':
                        new_var = value[0] + '[' + '%d' % (value[1] + i * 10) + ']'
                    else:
                        raise ValueError("sBoxExpand Invalid value")
                    curLine = curLine.replace(key, new_var)
                expandLines.append(curLine)
    return expandLines

def getCircuit(lines, tokens):
    res = []
    cur_res = []

    if tokens[0].startswith('y'):
        vars = 'y1 = x1;'
        for i in range(2, 129):
            vars += ' y%i = x%i;' % (i, i)
        for i in range(129, len(tokens) + 1):
            vars += ' y%i = 0;' % (i)
        cur_res.append('# Initialization')
        cur_res.append(vars + '\n')
        res.append(copy.deepcopy(cur_res))
        cur_res.clear()

    depth = 0
    t_depth = 0
    have_t = False
    for line in lines:
        if line.startswith('//'):
            if line.startswith('//d'):
                if depth > 0:
                    if have_t:
                        t_depth = t_depth + 1
                    have_t = False
                    cur_res.insert(0, '#Full depth %d and Toffoli depth %d' % (depth, t_depth))
                    res.append(copy.deepcopy(cur_res))
                    cur_res.clear()
                depth = depth + 1
            continue
        cur_res.append(line)
        if '*' in line:
            have_t = True
    if depth > 0:
        cur_res.insert(0, '#Full depth %d and Toffoli depth %d' % (depth, t_depth))
        res.append(copy.deepcopy(cur_res))
        cur_res.clear()
    return res

def addMask(lines, tokens):
    tokenDict = {}
    for i in range(4):
        for j in range(32):
            tokenDict['X%d[%d]' % (i, j)] = 'y%d' % (i * 32 + j + 1)
    token_id = 128
    for token in tokens:
        if token not in tokenDict:
            token_id = token_id + 1
            tokenDict[token] = 'y%d' % (token_id)

    for i in range(len(lines)):
        if lines[i].startswith('#'):
            pass
        for key, value in tokenDict.items():
            lines[i] = lines[i].replace(key, value)
    
    tokens.clear()
    tokens += list(tokenDict.values())

def printCircuit(circuit):
    f = open('circuit.out', 'w')
    for x in circuit:
        ending = ''
        for i in range(len(x)):
            f.write(x[i])
            if i == 0:
                f.write('\n')
            elif i < len(x) - 1:
                f.write('  ')
        f.write('\n\n')
    f.write('#Reordering\n')
    f.write('z1=y33;')
    for i in range(2, 129):
        f.write(' z%d=y%d;' % (i, (i + 31) % 128 + 1))
    f.write('\n')
    f.close()

def generateL():
    l_lines = []
    offsets = [0, 2, 10, 14, 18, 24, 29]
    for offset in offsets:
        l_lines.append('//d')
        for i in range(32):
            line = 'X0[%d] = X0[%d]+S[%d];' % (i, i, (i + offset) % 32)
            l_lines.append(line)
    return l_lines

def xorX2():
    xorX2_lines = []

    xorX2_lines.append('//d')
    for i in range(32):
        line = 'X1[%d] = X1[%d]+X2[%d];' % (i, i, i)
        xorX2_lines.append(line)
    xorX2_lines.append('//d')
    for i in range(32):
        line = 'X1[%d] = X1[%d]+X3[%d];' % (i, i, i)
        xorX2_lines.append(line)
    return xorX2_lines

lines = []
with open('S-BOX.in', 'r') as file:
    lines = file.readlines()
lines = [x.strip() for x in lines]
for i in range(len(lines)):
    lines[i] = lines[i].replace('U[0]', 'H[0]')
    lines[i] = lines[i].replace('U[1]', 'H[1]')
    lines[i] = lines[i].replace('U[2]', 'H[2]')
    lines[i] = lines[i].replace('U[3]', 'H[3]')

    lines[i] = lines[i].replace('U[4]', 'U[3]')
    lines[i] = lines[i].replace('U[5]', 'U[2]')
    lines[i] = lines[i].replace('U[6]', 'U[1]')
    lines[i] = lines[i].replace('U[7]', 'U[0]')

    lines[i] = lines[i].replace('H[0]', 'U[7]')
    lines[i] = lines[i].replace('H[1]', 'U[6]')
    lines[i] = lines[i].replace('H[2]', 'U[5]')
    lines[i] = lines[i].replace('H[3]', 'U[4]')

circuit_lines = []

process_backend_comment(lines)
tokens = getToken(lines)
tokenDict = token2Dict(tokens)
xorX2_lines = xorX2()
expandLines = sBoxExpand(lines, tokenDict, 4)
l_lines = generateL()

circuit_lines += xorX2_lines
circuit_lines += expandLines
circuit_lines += l_lines
circuit_lines += [expandLines[0]] + expandLines[1:][::-1]
circuit_lines += [xorX2_lines[0]] + xorX2_lines[1:][::-1]

tokens = getToken(circuit_lines)
addMask(circuit_lines, tokens)
circuit = getCircuit(circuit_lines, tokens)
printCircuit(circuit)
