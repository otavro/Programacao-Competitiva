a = []
while True:
    try:
        n = input()
        a.append(n)
    except EOFError:
        a.sort(key=str.lower)
        print(a[-1])
        break
