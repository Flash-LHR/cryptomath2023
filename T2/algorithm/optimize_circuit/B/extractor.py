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

lines = '''S[0] = S[0] + U[0] + U[5] + z[9] + z[15] + z[16] + T[5] + T[9] + T[32];
S[1] = S[1] + z[1] + z[5] + z[6] + z[11] + z[14] + T[7] + T[12] + T[30] + T[40] + Y[3] + Y[14];
S[2] = S[2] + U[1] + U[3] + U[6] + z[7] + z[11] + T[4] + T[8] + T[10];
S[3] = S[3] + U[2] + U[3] + z[1] + z[2] + z[4] + z[16] + z[17] + T[6] + T[11] + T[43];
S[4] = S[4] + U[4] + z[12] + z[14] + z[16] + T[5] + T[10] + T[40];
S[5] = S[5] + z[6] + z[7] + z[12] + z[13] + T[36] + Y[0] + Y[2] + Y[4];
S[6] = S[6] + U[1] + U[7] + z[14] + z[15] + T[30] + T[36] + T[43] + Y[8] + Y[9];
S[7] = S[7] + U[1] + U[4] + z[6] + z[7] + z[12] + z[17] + T[30] + T[43] + Y[2] + 1;'''

lines = lines.split('\n')
lines_token = [[] for _ in range(len(lines))]
token_set = set()
token_cnt = {}
for i in range(len(lines)):
    line = lines[i]
    print(line.count('+'), end=' ')
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

print()
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
