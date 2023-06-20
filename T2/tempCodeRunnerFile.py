 circuit:
        ending = ''
        for i in range(len(x)):
            print(x[i], end='')
            if i == 0:
                print()
            elif i < len(x) - 1:
                print('  ', end='')
        print('\n