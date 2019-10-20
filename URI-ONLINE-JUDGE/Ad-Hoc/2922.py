while True:
    try:
        a, b = input().split(' ')
        if b >a:
            res = int(b) - int(a) -1
        elif int(a) == int(b):
            res = 0
        else:
            res = int(a) - int(b) -1

        print(res)

    except EOFError:
        break