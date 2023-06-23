lines = ''
with open('tmp.in', 'r') as f:
    lines = f.readlines()
lines = reversed(lines)
with open('tmp.out', 'w') as f:
    for line in lines:
        f.write(line)