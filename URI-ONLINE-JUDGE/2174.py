def remove_repetidos(lista):
    l = []
    for i in lista:
        if i not in l:
            l.append(i)
    l.sort()
    return l
lista = []
n = int(input())
for c in range(0,n):
    a = input()
    lista.append(a)
lista = remove_repetidos(lista)
print("Falta(m) {} pomekon(s).".format(151-len(lista)))