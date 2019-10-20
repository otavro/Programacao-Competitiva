def main():
    tamd = []
    tame = []
    n = int(input())
    for c in range(0, n):
        a, b = input().split(' ')
        if b == 'E':
            tame.append(a)
        else:
            tamd.append(a)
    ig = 0
    tam = len(tame)
    for c in range(0, len(tamd)):
        j=0
        while j!= len(tame):
            if tamd[c] == tame[j]:
                ig += 1
                tame.remove(tamd[c])
            j+=1
    print(tamd)
    print(tame)
    print(ig)



while True:
    try:
        main()
    except EOFError:
        break