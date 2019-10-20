n = int(input())
for c in range(0 , n):
    a, sinal, b , ig, res = input().split(' ')
    a, b = int(a), int(b)
    if sinal == '+':
        x = a + b
    elif sinal == 'x':
        x = a * b
    elif sinal == '-':
        x = a - b
    y= abs(x-int(res))
    print('E'+y*'r'+'ou!')