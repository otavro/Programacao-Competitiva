x = int(input())
y = int(input())
sum = 0

if x < y:
    c = x
    for c in range(x, y):
        if c % 2 !=0:
            sum += c
        c += 1
else:
    c = y
    for c in range(y, x):
        if c % 2 != 0:
            sum += c
            print(sum)
        c -= 1
print(sum)