c = 1
while True:
    banknote = int(input())
    if banknote == 0:
        break
    aux = banknote
    cinquenta = aux // 50
    aux = aux % 50
    dez = aux // 10
    aux = aux % 10
    cinco = aux // 5
    aux = aux % 5
    um = aux // 1
    aux = aux % 1
    print("Teste {}".format(c))
    print("{} {} {} {}".format(cinquenta, dez, cinco, um))
    print('')
    c+=1
