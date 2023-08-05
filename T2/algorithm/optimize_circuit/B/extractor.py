import copy

def get_expr(token, lines_token):
    vis = False
    expr = set()
    for line_token in lines_token:
        if token not in line_token:
            continue
        if vis:
            expr &= line_token
        else:
            expr = copy.deepcopy(line_token)
            vis = True
    nice_expr = token + ' = ' + token
    expr.remove(token)
    expr = sorted(expr)
    for x in expr:
        nice_expr += ' + ' + x
    nice_expr += ';'
    return nice_expr

lines = '''T[30] = T[30] + T[36] + z[10] + z[11] + z[13] + z[3] + z[8];
T[8] = T[8] + 1 + T[43] + z[13] + z[16] + z[1] + z[2] + z[3] + z[4];
z[0] = z[0] + T[32] + T[5] + z[12] + z[13] + z[6] + z[7];
T[10] = T[10] + T[11] + T[4] + T[5] + z[12];
T[7] = T[7] + T[9] + z[10];
z[14] = z[14] + T[40] + z[15];'''

lines = lines.split('\n')
lines = [x for x in lines if not x.startswith('QAND')]
lines_token = [[] for _ in range(len(lines))]
token_set = set()
token_cnt = {}
deg = []
for i in range(len(lines)):
    line = lines[i]
    deg.append(line.count('+'))
    line = line.replace('=', '')
    line = line.replace('+', '')
    line = line.replace(';', '')
    lines_token[i] = [x.strip() for x in line.split(' ') if x.strip() != '']
    lines_token[i] = set(lines_token[i])
    token_set |= lines_token[i]
    for token in list(lines_token[i]):
        if token not in token_cnt.keys():
            token_cnt[token] = 0
        token_cnt[token] = token_cnt[token] + 1

print(deg, ', max =', max(deg))
token_set = sorted(token_set)
for token in token_set:
    # if token.startswith('U') or token.startswith('S') or token.startswith('Y'):
    #     continue
    if token_cnt[token] < 2:
        continue
    expr = get_expr(token, lines_token)
    if expr.count('+') < 2:
        continue
    print('(' + token + ',' + str(token_cnt[token]) + '):', expr)
