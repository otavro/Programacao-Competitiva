def dec_para_bin(num):
    num = int(num)
    valor = '' 
    resto = 0

    while True:
        resto = num // 2
        aux = num-(resto*2)
        valor+= str(aux)
        num = num // 2 
        if num <= 0:
            break

    print(valor[::-1],"bin")

def dec_para_hex(num):
    num = int(num)  
    print(hex(num)[2:],"hex")
# FIM - CONVERÇÕES DE DECIMAIS

# INÍCIO - CONVERÇÕES DE BINARIOS
def bin_para_dec(num):
    num = list(num)
    valor = 0

    for i in num:
        valor = valor * 2 + int(i)
    print(valor,"dec")

def bin_para_hex(num):
    # converte para decimal
    num = list(num)
    valor = 0
    for i in num:
        valor = valor * 2 + int(i)

    # converte de decimal para hexadecimal          
    print(hex(valor)[2:],"hex")
# FIM - CONVERÇÕES DE BINARIO

# INÍCIO - CONVERÇÕES DE HEXADECIMAL
def hex_para_dec(num):
    num = int(num, 16)
    print(num,"dec")

def hex_para_bin(num):
    num = int(num, 16)  
    dec_para_bin(num)
# FINAL - CONVERÇÕES DE HEXADECIMAL



vezes = int(input())
for i in range(vezes):
    num,base = input().split()
    print("Case %d:"%(i+1))
    if base == 'bin':
        bin_para_dec(num)
        bin_para_hex(num)

    elif base == 'dec':
        dec_para_hex(num)   
        dec_para_bin(num)

    elif base == 'hex':
        hex_para_dec(num)
        hex_para_bin(num)   
    print() 