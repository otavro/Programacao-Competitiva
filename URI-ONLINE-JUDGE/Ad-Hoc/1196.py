teclado = '`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./'
while True:
    try:
        frase = input()
        corrigido = ''
        for c in frase:
            if c == ' ':
                corrigido += c
            else:
                corrigido += teclado[teclado.index(c)-1]
        print(corrigido)
    except EOFError:
        break