while True:
    a, b = input().split(' ')
    if a==b=='0':
        break
    tamA = len(a)
    c = 0
    x = 0
    for c in range(c, tamA):
        res = int(a[c]) + int(b[c])
        if res>9:
            x+=1
    if x==0:
        print("No carry operation.")
    else:
        print("{} carry operation.".format(x))