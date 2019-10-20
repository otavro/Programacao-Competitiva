conta = int(input())
tot = 7
aux = conta -100
if aux > 0:
    conta -= aux
    tot += aux *5

aux = conta - 30

if aux > 0:
    conta -= aux
    tot += aux *2
aux = conta - 10

if aux > 0:
    tot -= aux
print(tot)