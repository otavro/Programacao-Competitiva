res = 1
n = int(input())
for c in range(0, n):
    a, b = input().split(' ')
    a = int(a)
    if b == '*':
        res*= a
    else:
        res /= a
print("{:.0f}".format(res))