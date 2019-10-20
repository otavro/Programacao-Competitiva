x = []
a, b, c ,d ,e = input().split(' ')
x.append(float(a))
x.append(float(b))
x.append(float(c))
x.append(float(d))
x.append(float(e))
x.sort()
res = x[1] + x[2] +x[3]
print('{:.1f}'.format(res))
