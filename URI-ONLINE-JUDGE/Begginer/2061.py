n, a = input().split(' ')
c = 0
a = int(a)
n= int(n)
for c in range(c, a):
    b = input()
    if 'fechou' in b:
        n +=1
    else:
        n -=1
print(n)