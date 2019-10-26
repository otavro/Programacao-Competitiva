from sys import stdin
n, vida = str(stdin.readline()).split(' ')
n, vida = int(n), int(vida)
let = []
dan = []
tot = 0
for c in range(0, n):
    letra, num = str(stdin.readline()).split(' ')
    let.append(letra)
    dan.append(int(num))
n = int(stdin.readline())
a = input().split(' ')
for c in range(0, n):
    for j in range(0, len(let)):
        if a[c] == let[j]:
            tot += dan[j]
            break
print(tot)
if tot>= vida:
   print('You shall pass!')
else:
    print('My precioooous')