n = int(input())
c = 2
for c in range(c, n+1):
    if c % 2 == 0:
        print("{}^2 = {}".format(c, c*c))