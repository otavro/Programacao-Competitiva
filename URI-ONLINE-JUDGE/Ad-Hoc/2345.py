a, b ,c ,d = input().split()
x = []
x.append(int(a))
x.append(int(b))
x.append(int(c))
x.append(int(d))
y = x[0] + x[3]
y2 = x[1] + x[2]
res = abs(y - y2)
print(res)