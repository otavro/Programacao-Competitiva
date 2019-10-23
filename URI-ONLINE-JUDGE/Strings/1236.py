def comp(palavra):
    x = y = 0
    for i, j in enumerate(palavra):
        palavra[i] = j[0]
        if palavra[i] == palavra[i - 1] and y == 0:
            y = 1
            x += 1
        elif palavra[i] != palavra[i - 1]:
            y = 0
    return x
def main():
    palavra = []
    palavra = (input().upper()).split()
    x = comp(palavra)
    print(x)

while True:
    try:
        main()
    except EOFError:
        break