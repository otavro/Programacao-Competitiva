while True:
     n = str(input())
     if n=='-1':
         break
     if 'x' in n:
        n = int(n, 16)
        print(n)
     else:
         n = int(n)
         print(hex(n))


