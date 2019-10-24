from math import ceil
X, Y = input().split(' ')
c = int(Y) - int(X)
res = ceil(int(Y)/c)
print(res)