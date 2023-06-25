lines = []
with open('circuit.out', 'r') as file:
    lines = file.readlines()
lines = [x for x in lines if not x.startswith('#')]
lines = [x for x in lines if not x.startswith('\n')]
lines = lines[1:-1]
for line in lines:
    line = line.strip()
    equs = [x.strip() for x in line.split(';') if x != '']
    tokens = []
    for equ in equs:
        cur_equ = equ
        cur_equ = cur_equ.replace('=', ' ')
        cur_equ = cur_equ.replace('+', ' ')
        cur_equ = cur_equ.replace('*', ' ')
        equ_tokens = [x for x in cur_equ.split(' ') if x != '']
        if '*' in equ:
            if len(equ_tokens) != 4 or equ_tokens[0] != equ_tokens[1]:
                raise Exception(equ, equ_tokens)
            tokens.append(equ_tokens[1])
            tokens.append(equ_tokens[2])
            tokens.append(equ_tokens[3])
        else:
            if len(equ_tokens) != 3 or equ_tokens[0] != equ_tokens[1]:
                raise Exception(equ, equ_tokens)
            tokens.append(equ_tokens[1])
            if equ_tokens[2] != '1':
                tokens.append(equ_tokens[2])
    tokens = sorted(tokens)
    if len(tokens) != len(set(tokens)):
        raise Exception(tokens, line)
print('OK')
