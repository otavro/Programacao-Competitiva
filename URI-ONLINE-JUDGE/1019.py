tempo = int(input())
horas = tempo // 3600
if horas > 0:
    tempo = tempo % 3600
minutos = tempo // 60
tempo = tempo % 60
segundos = tempo
print("{}:{}:{}".format(horas, minutos, segundos))
