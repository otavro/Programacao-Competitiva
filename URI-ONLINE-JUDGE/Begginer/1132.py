x = int(input())
y = int(input())
if x < y:
    c = x
    d = y
else:
    c = y
    d = x
sum = 0
for c in range(c, d+1):
    if c % 13 != 0:
        sum = sum + c
    c += 1
print(sum)
