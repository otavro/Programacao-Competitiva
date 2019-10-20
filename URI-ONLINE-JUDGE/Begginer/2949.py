n = int(input())
A = E = H = M = X =0
c =0
while c!=n:
    nome, classe = input().split()
    if 'A' in classe:
        A+=1
    elif 'E' in classe:
        E+=1
    elif 'H' in classe:
        H+=1
    elif 'M' in classe:
        M+=1
    elif 'X' in classe:
        X+=1
    c+=1
print("{} Hobbit(s)".format(X))
print("{} Humano(s)".format(H))
print("{} Elfo(s)".format(E))
print("{} Anao(s)".format(A))
print("{} Mago(s)".format(M))