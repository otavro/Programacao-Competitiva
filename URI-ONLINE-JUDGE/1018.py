banknote = int(input())
aux = banknote
cem = aux // 100
aux = aux % 100
cinquenta = aux // 50
aux = aux % 50
vinte = aux // 20
aux = aux % 20
dez = aux // 10
aux = aux % 10
cinco = aux // 5
aux = aux % 5
dois = aux // 2
aux = aux % 2
um = aux // 1
aux = aux % 1

print("{}".format(banknote))
print("{} nota(s) de R$ 100,00".format(cem))
print("{} nota(s) de R$ 50,00".format(cinquenta))
print("{} nota(s) de R$ 20,00".format(vinte))
print("{} nota(s) de R$ 10,00".format(dez))
print("{} nota(s) de R$ 5,00".format(cinco))
print("{} nota(s) de R$ 2,00".format(dois))
print("{} nota(s) de R$ 1,00".format(um))
