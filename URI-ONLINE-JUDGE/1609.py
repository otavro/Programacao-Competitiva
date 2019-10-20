def remove_repetidos(lista):
    l = []
    for i in lista:
        if i not in l:
            l.append(i)
    l.sort()
    return l

n = int(input())
for c in range(0, n):
    x = int(input())
    y = input().split(' ')
    y = remove_repetidos(y)
    print(len(y))