def main():
    n = input().upper().split('-')
    a = 0
    if 'C' in n[0][0] or 'C' in n[0][-1]:
        a+=1
    if 'O' in n[1][0] or 'O' in n[1][-1] :
        a+=1
    if 'B' in n[2][0] or 'B' in n[2][-1] :
        a+=1
    if 'O' in n[3][0] or 'O' in n[3][-1] :
        a+=1
    if 'L' in n[4][0] or 'L' in n[4][-1] :
        a+=1
    if a ==5:
        print('GRACE HOPPER')
    else:
        print('BUG')

while True:
    try:
        main()
    except EOFError:
        break