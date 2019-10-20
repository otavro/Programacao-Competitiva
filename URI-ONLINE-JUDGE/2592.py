import sys

while True:
    n = int(sys.stdin.readline())
    if n == 0:break
    cont = 0
    while True:
        m = list(map(int, sys.stdin.readline().split()))
        if m == sorted(m):
            cont += 1
            print(cont)
            break
        else:
            cont += 1
