def main(j):
    n = int(input())
    for c in range(0, n):
        a, b = input().split(' ')
        b = int(b)
        if c ==0:
            menor = b
            nmenor = a
        if b < menor:
            menor = b
            nmenor = a
    print('Instancia {}'.format(j))
    print(nmenor)

j = 1
while True:
    try:
        main(j)
        j+=1
        print('')
    except EOFError:
        break