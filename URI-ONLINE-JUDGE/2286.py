i = 1
while True:
    n = int(input())
    if n==0:
        break
    nome = []
    a = input()
    nome.append(a)
    a = input()
    nome.append(a)
    print('Teste {}'.format(i))
    for c in range(0, n):
        a, b = input().split(' ')
        res = int(a) + int(b)
        if res % 2 ==0:
            print(nome[0])
        else:
            print(nome[1])
    print('')
    i+=1