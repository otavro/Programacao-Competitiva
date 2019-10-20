while True:
    c = res = 0
    try:
        c+=1
        a = input()
        b = float(input())
        res +=b
    except EOFError:
        print("{:.1f}".format(round(res/c)))
        break