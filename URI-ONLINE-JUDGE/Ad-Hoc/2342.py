maxi = int(input())
a, sinal, b = input().split(" ")
if sinal =='+':
    res = int(a) + int(b)
else:
    res = int(a) * int(b)
if maxi >= res:
    print('OK')
else:
    print('OVERFLOW')
