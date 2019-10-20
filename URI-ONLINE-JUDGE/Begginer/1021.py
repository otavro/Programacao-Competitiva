banknote = float(input())
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
aux = (aux % 1) * 100

cinquentacents = aux // 50
aux = aux % 50
vinteecinco = aux // 25
aux = aux % 25
dezcents = aux // 10
aux = aux % 10
cincocents = aux // 5
aux = aux % 5
umcents = aux

print("NOTAS:")
print("{:.0f} nota(s) de R$ 100.00".format(cem))
print("{:.0f} nota(s) de R$ 50.00".format(cinquenta))
print("{:.0f} nota(s) de R$ 20.00".format(vinte))
print("{:.0f} nota(s) de R$ 10.00".format(dez))
print("{:.0f} nota(s) de R$ 5.00".format(cinco))
print("{:.0f} nota(s) de R$ 2.00".format(dois))
print("MOEDAS:")
print("{:.0f} moeda(s) de R$ 1.00".format(um))
print("{:.0f} moeda(s) de R$ 0.50".format(cinquentacents))
print("{:.0f} moeda(s) de R$ 0.25".format(vinteecinco))
print("{:.0f} moeda(s) de R$ 0.10".format(dezcents))
print("{:.0f} moeda(s) de R$ 0.05".format(cincocents))
print("{:.0f} moeda(s) de R$ 0.01".format(round(umcents, 2)))
