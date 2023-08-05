from random import randint

M = int(1e3)

with open('testVector.in', 'w') as f:
    for i in range(M):
        f.write('%032x\n' % randint(0, (1<<128) - 1))