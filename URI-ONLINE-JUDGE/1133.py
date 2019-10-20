a = int(input())
b = int(input())

if a<b:
    c = a
    d = b
else:
    c = b
    d = a

for c in range(c+1, d):
    if c % 5 == 2 or c % 5 == 3:
        print(c)
    c += 1