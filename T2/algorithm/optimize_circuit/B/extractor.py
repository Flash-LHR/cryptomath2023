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

lines = '''S[0] = S[0] + U[2] + z[9] + z[10] + z[15] + z[16] + T[5] + T[7] + T[9] + T[32] + Y[13];
S[1] = S[1] + z[1] + z[2] + z[3] + z[5] + z[6] + z[8] + z[10] + z[11] + z[13] + z[14] + z[15] + z[16] + T[30] + T[36] + T[40] + 1;
S[2] = S[2] + U[0] + z[3] + z[4] + z[7] + z[8] + z[10] + z[11] + z[13] + T[10] + T[30] + T[36] + Y[2] + Y[3] + Y[6] + Y[14];
S[3] = S[3] + U[7] + z[1] + z[2] + z[3] + z[4] + z[12] + z[13] + z[16] + z[17] + T[5] + T[8] + T[11] + T[12] + T[43] + Y[12] + 1;
S[4] = S[4] + U[6] + z[14] + z[15] + z[16] + T[10] + T[40] + 1;
S[5] = S[5] + z[0] + z[1] + z[6] + z[7] + z[10] + z[11] + z[12] + z[13] + T[4] + T[5] + T[7] + T[9] + T[32] + T[36] + Y[0] + Y[4];
S[6] = S[6] + z[1] + z[2] + z[3] + z[4] + z[10] + z[11] + z[13] + z[14] + z[15] + z[16] + T[6] + T[8] + T[36] + T[40] + T[43] + Y[8] + Y[9] + 1;
S[7] = S[7] + U[3] + z[0] + z[2] + z[3] + z[4] + z[6] + z[7] + z[12] + z[13] + z[16] + z[17] + T[5] + T[32] + T[40] + T[43];'''

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
