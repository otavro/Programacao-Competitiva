while True:
    try:
        l = []
        n = int(input())
        for c in range(0, n):
            a = input()
            l.append(a)
        l.sort()
        for c in range(0, len(l)):
            print(l[c])
    except EOFError:
        break