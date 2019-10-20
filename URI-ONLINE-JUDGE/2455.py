a, b, c, d = input().split(' ')
a = int(a)* int(b)
c = int(c) * int(d)
if a==c:
    print('0')
elif a>c:
    print('-1')
else:
    print('1')