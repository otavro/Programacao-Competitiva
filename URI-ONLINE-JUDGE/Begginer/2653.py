lista = []
j = 0
while True:
    try:
        a = input()
        tam = len(lista)
        v = False
        if j ==0:
            lista.append(a)
            j+=1
            continue
        else:
            for c in range(0, tam):
                if a == lista[c]:
                    v = True
        if v == False:
            lista.append(a)
            j+=1
    except EOFError:
        print(j)
        break