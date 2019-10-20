a = input()
if a.count('1') % 2 == 0:
    a = a + '0'
else:
    a = a + '1'
print(a)