estados = ('Roraima', 'Acre', 'Amapa', 'Amazonas', 'Para', 'Rondonia','Tocantins')
nome = input().lower().capitalize()
if nome in estados:
    print('Regiao Norte')
else:
    print('Outra regiao')