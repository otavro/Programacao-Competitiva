n, m = input().split(' ')
n = int(n)
a =''
V = []
D = []
for c in range(0, n):
    a += input()
    a+=' '
a = a.split(' ')
for c in range(0, len(a)):
    if 'V' in a[c]:
        V.append(a[c])
    elif 'D' in a[c]:
        D.append(a[c])
V.sort(reverse= True)
D.sort(reverse= True)
for c in range(0, len(V)):
    print(V[c])
for c in range(0, len(D)):
    print(D[c])
