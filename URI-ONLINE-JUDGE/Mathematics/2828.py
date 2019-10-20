import math

a = str(input())
letras = 1 #letras é oq ira dividir//esta csendo chamado de letras pq minha logica antiga n funcionou
div = len(a)



if a.count('a') > 1:
    letras = letras * math.factorial(a.count('a'))
if a.count('b') > 1:
    letras = letras * math.factorial(a.count('b'))
if a.count('c') > 1:
    letras = letras * math.factorial(a.count('c'))
if a.count('d') > 1:
    letras = letras * math.factorial(a.count('d'))
if a.count('e') > 1:
    letras = letras * math.factorial(a.count('e'))
if a.count('f') >1:
    letras = letras * math.factorial(a.count('f'))
if a.count('g') >1:
    letras = letras * math.factorial(a.count('g'))
if a.count('h') >1:
    letras = letras * math.factorial(a.count('h'))
if a.count('i') >1:
    letras = letras * math.factorial(a.count('i'))
if a.count('j') >1:
    letras = letras * math.factorial(a.count('j'))
if a.count('k') >1:
    letras = letras * math.factorial(a.count('k'))
if a.count('l') >1:
    letras = letras * math.factorial(a.count('l'))
if a.count('m') >1:
    letras = letras * math.factorial(a.count('m'))
if a.count('n') >1:
    letras = letras * math.factorial(a.count('n'))
if a.count('o') >1:
    letras = letras * math.factorial(a.count('o'))
if a.count('p') >1:
    letras = letras * math.factorial(a.count('p'))
if a.count('q') >1:
    letras = letras * math.factorial(a.count('q'))
if a.count('r') >1:
    letras = letras * math.factorial(a.count('r'))
if a.count('s') >1:
    letras = letras * math.factorial(a.count('s'))
if a.count('t') >1:
    letras = letras * math.factorial(a.count('t'))
if a.count('u') >1:
    letras = letras * math.factorial(a.count('u'))
if a.count('v') >1:
    letras = letras * math.factorial(a.count('v'))
if a.count('w') >1:
    letras = letras * math.factorial(a.count('w'))
if a.count('x') >1:
    letras = letras * math.factorial(a.count('x'))
if a.count('y') >1:
    letras = letras * math.factorial(a.count('y'))
if a.count('z') >1:
    letras = letras * math.factorial(a.count('z'))

div = math.factorial(div)

result = div//letras

print("{}".format(result))
