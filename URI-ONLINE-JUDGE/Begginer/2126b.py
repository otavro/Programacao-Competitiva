from sys import stdin

def main(i):
    a = input()
    b = str(stdin.readline())

    print('Caso #{}:'.format(i))
    if b.count(a) > 0:
        print('Qtd.Subsequencias: {}'.format(b.count(a)))
        print('Pos: {}'.format(b.rfind(a)+1))
    else:
        print('Nao existe subsequencia')
    print()
i = 0

while True:
    try:
        i += 1
        main(i)
    except EOFError:
        break