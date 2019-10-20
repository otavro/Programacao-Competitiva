n = int(input())
c = 1

for c in range(c, n+1):
    if n % c == 0:
        print(c)
    c += 1