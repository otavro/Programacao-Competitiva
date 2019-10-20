def fat(k):
    k_fat = 1
    for n in range(2, k+1):
        k_fat *= n
    return(k_fat)

entrada = input()

if entrada.count(entrada[0])  !=  len(entrada):
    anagrama =  fat(len(entrada))

    end = dict()
    q_rep = 1
    for i in entrada:
        if entrada.count(i) > 1 and i not in end:
            end[i] = entrada.count(i)
            q_rep *= fat(entrada.count(i))

    anagrama /= q_rep

else:
    anagrama = 1

resto = str(int(anagrama) % (pow(10, 9) + 7))
print(resto)