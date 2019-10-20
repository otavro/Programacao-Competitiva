palavras = []

i = int(input())
c=0
while c != i:
    palavras.append(input())
    c += 1
arrumado = sorted(palavras)
c = 0
while c != i:
    print(arrumado[c])
    c += 1

