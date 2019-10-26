#sort(key=str.lower)
def remove_repetidos(lista):
    l = []
    for i in lista:
        if i not in l:
            l.append(i)
    l.sort()
    return l

def sep_letras(a):
    b = []
    for c in range(0, len(a)):
        if a[c].isalpha():
            b.append(a[c])
    return b

def pos_vogais(a):
    pos = []
    for c in range(0, len(a)):
        if a[c] =='a' or a[c] =='e' or a[c] =='i' or a[c] =='o' or a[c] =='u':
            pos.append(c)
    return pos


def is_prime(n):
    if n <= 1:
        return False
    max_div = math.floor(math.sqrt(n))
    for i in range(2, 1 + max_div):
        if n % i == 0:
            return False
    return True
