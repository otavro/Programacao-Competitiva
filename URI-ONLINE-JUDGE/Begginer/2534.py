while True:
    try:
        notas = []
        n, q = input().split(' ')
        n, q = int(n), int(q)
        for c in range(n):
            a = int(input())
            notas.append(a)
        notas.sort(reverse=True)
        for c in range(q):
            a = int(input())
            print(notas[a-1])
    except EOFError:
        break