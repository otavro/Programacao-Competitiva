n = int(input())
for c in range(0, n):
    tot = 0
    x, y = input().split(' ')
    x, y = int(x), int(y)
    for j in range(0,x):
        tot+= int(input())
    tot = tot/y
    print("{:0f}".format(tot))