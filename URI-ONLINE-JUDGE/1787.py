pot_dois = [1 , 2 ,4 ,8, 16 ,32 ,64 ,128 ,256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608]

def main():
    n = 1
    while n!=0:
        ui = ri = li = 0
        n = int(input())
        if n == 0:
            break
        for c in range(0, n):
            a, b, c = input().split(' ')
            a, b, c = int(a), int(b), int(c)
            if a in pot_dois:
                ui +=1
                if a > b and b > c or a > c and c>b:
                    ui +=1
            if b in pot_dois:
                ri +=1
                if b > a and a>c or b>a and b>c:
                    ri+=1
            if c in pot_dois:
                li +=1
                if c > a and a>c or c >a and c>b:
                    li+=1
        if ui > ri and ri > li:
            print('Uilton')
        elif ui > li and li > ri:
            print('Uilton')
        elif ri > ui and ui > li:
            print('Rita')
        elif ri > li and li >ui:
            print('Rita')
        elif li > ri and ri > ui:
            print('Ingred')
        elif li > ui and ui >ri:
            print('Ingred')
        else:
            print('URI')


while True:
    try:
        main()
    except EOFError:
        break