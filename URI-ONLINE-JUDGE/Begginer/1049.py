animal = str(input()).lower()

if animal =="vertebrado": #vertebrados
    animal = str(input()).lower()
    if animal =="ave":
        animal = str(input()).lower()
        if animal == "carnivoro":
            print("aguia")
        else:
            print("pomba")

    else:
        animal = str(input()).lower()
        if animal =="onivoro":
            print("homem")
        else:
            print("vaca")
else:
    animal = str(input()).lower()
    if animal == "inseto":
        animal = str(input()).lower()
        if animal == "hematofago":
            print("pulga")
        else:
            print("lagarta")

    else:
        animal = str(input()).lower()
        if animal == "hematofago":
            print("sanguessuga")
        else:
            print("minhoca")
