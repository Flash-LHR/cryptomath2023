def getGraph(lines):
    for line in lines:
        line = line.strip()
        if line.startswith('//') or line == '':
            continue
        token_list = []
        if line.startswith('QAND'):
            token_list = [x.strip() for x in line.split('(')[1].split(')')[0].split(',')]
            print(token_list[0], token_list[2])
            print(token_list[1], token_list[2])
        else:
            line = line.replace('+', ' ')
            line = line.replace('=', ' ')
            line = line.replace(';', ' ')
            token_list = [x.strip() for x in line.split(' ') if x != '']
            print(token_list[2], token_list[0])

lines = ''
with open('S-BOX.in', 'r') as f:
    lines = f.readlines()

circuit = getGraph(lines)