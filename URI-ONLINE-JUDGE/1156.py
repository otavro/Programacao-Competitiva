s = 1
x = 3
y = 2
while x < 39:
    s = s + (x/y)
    x = x + 2
    y = y * 2
print('{:.2f}'.format(s))