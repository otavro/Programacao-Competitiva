while True:
    try:
        a = input()
        if a=='esquerda':
            print("ingles")
        elif a=='direita':
            print("frances")
        elif a=='nenhuma':
            print("portugues")
        elif a=='as duas':
            print("caiu")
    except EOFError:
        break
