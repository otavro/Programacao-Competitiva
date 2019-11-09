from sys import stdin
while True:
    n = int(stdin.readline())
    if n == 0:
        break
    tot = 0
    for c in range(n):
        w = input().split()
        a = int(w[0])
        b = ' '.join(w[1:])
        if b == "suco de laranja":
            tot += a * 120
        elif b == "morango fresco":
            tot += a * 85
        elif b == "mamao":
            tot += a * 85
        elif b == "goiaba vermelha":
            tot += a * 70
        elif b == "manga":
            tot += a * 56
        elif b == "laranja":
            tot += a * 50
        elif b == "brocolis":
            tot += a * 34
    if tot >= 110 and tot <= 130:
        print('{} mg'.format(tot))
    else:
        if tot > 130:
            print('Menos {} mg'.format(tot-130))
        else:
            print('Mais {} mg'.format(110 - tot))