n = int(input())
for c in range(0, n):
    a = int(input())
    soma = 0
    if a ==1:
        j =1
    else:
        for j in range(1, a):
            if soma > a:
                break
            soma +=j
    if soma > a:
        print(j-2)
    else:
        print(j)