vezes = int(input())
maiores = []
maiores1 = []

for i in range(vezes):
  codigo, tamanho = input().split()
  tamanho = float(tamanho)

  if tamanho>=8:
    maiores.append(int(codigo))
    maiores1.append(float(tamanho))
  
cont = 0
aux = 0
pos = 0

for x in maiores:
  if x > aux:
    aux = x
    pos = x

if pos == 0:
  print("Minimum note not reached")

else:
  print(pos)    
