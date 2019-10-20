while True:
    try:
        m, d = input().split(' ')
        m, d = int(m), int(d)
        m = (m-1) * 30
        d = m + d
        if d == 355:
            print('E natal!')
        elif d == 354:
            print('E vespera de natal!')
        elif d >355:
            print('Ja passou!')
        else:
            print('Faltam {} dias para o natal!'.format(360-d))
    except EOFError:
        break