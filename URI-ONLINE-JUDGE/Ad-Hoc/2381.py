x, n = input().split(' ')
x ,n = int(x), int(n)
a = []
for c in range(0, x):
    b = input()
    a.append(b)
a.sort()
print(a[n-1])