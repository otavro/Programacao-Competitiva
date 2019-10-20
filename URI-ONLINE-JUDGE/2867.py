n = int(input())
c = 0
for c in range(c, n):
    a , b = input().split(' ')
    a, b = int(a), int(b)
    rest = pow(a, b)
    resu = str(rest)
    print(len(resu))