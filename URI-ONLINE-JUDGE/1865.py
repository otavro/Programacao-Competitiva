nomes = []
n = int(input())
c = 0
while c != n:
    nomes.append(input())
    c += 1
c = 0

while c!=n:
    if 'Thor' in nomes[c]:
        print("Y")
    else:
        print("N")
    c += 1