n = int(input())
num = []
for c in range(0, n):
    num.append(int(input()))
num.sort()
cont = 0
x = num[0]
for c in range(0, n):
    if x == num[c]:
        cont +=1
    else:
        print("{} aparece {} vez(es)".format(x, cont))
        x = num[c]
        cont = 1
print("{} aparece {} vez(es)".format(x, cont))