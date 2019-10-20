a = input()
for c in range(0, len(a)):
    if a[c] != 'p':
        print(a[c], end='')
    elif a[c]=='p' and a[c+1] == 'p' and a[c+2] =='p':
        print('p', end='')
print('\n')