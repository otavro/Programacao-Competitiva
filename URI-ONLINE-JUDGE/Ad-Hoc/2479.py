a = b =0
cham = []
n = int(input())
for c in range(0, n):
    x , y = input().split(' ')
    if x =='+':
        a+=1
    else:
        b+=1
    cham.append(y)
cham.sort()
for c in range(0, len(cham)):
    print(cham[c])
print("Se comportaram: {} | Nao se comportaram: {}".format(a, b))

