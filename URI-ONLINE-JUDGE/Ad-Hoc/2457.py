letra = input()
frase = input().split(' ')
c = 0
qtd = 0
for c in range(c, len(frase)):
    if letra in frase[c]:
        qtd+=1
print("{:.1f}".format(qtd * 100 / len(frase)))