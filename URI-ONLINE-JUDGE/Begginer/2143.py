from sys import stdin
while True:
    T = int(stdin.readline())
    if T == 0:
        break
    for c in range(T):
        a = int(stdin.readline())
        if a % 2 == 1:
            print((2*a) -1)
        else:
            print((2*a)-2 )