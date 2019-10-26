from sys import stdin
n = int(stdin.readline())
for i in range(0, n):
    num = str(stdin.readline()).upper()
    soma = 0
    salv = '0'
    for c in range(0, len(num)):
        if num[c].isnumeric():
            salv += num[c]
            #print(f"Soma = {soma} - {c}")
            #print(f"Salv = {salv} - {c}")
        elif num[c].isupper():
            soma += int(salv)
            salv = '0'
            #print(f"Soma = {soma} - {c}")
            #print(f"Salv = {salv} - {c}")
    soma += int(salv)
    print(soma)
