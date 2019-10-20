n = 1
while n!=0:
    n = int(input())
    maior = 0
    palavras = []
    if n == 0:
        break
    for i in range(0, n):
        palavras.append(input())
        if i == 0:
            maior = (len(palavras[0]))
        if len(palavras[i])> maior:
            maior = (len(palavras[i]))
    for i in range(0, n):
        vezes = int(maior) - len(palavras[i])
        print(" " * vezes + "{}".format(palavras[i]))
    print("")