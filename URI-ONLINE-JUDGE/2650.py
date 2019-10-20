n, tam = input().split()
n ,tam = int(n), int(tam)
for c in range(0, n):
    nome, titan, x = input().split(' ')
    if int(x)> tam:
        print(nome+' '+titan)