idade = int(input())

ano = (idade // 365)
idade = (idade % 365)
meses = (idade // 30)
dias = (idade % 30)

print("{:.0f} anos(s)".format(ano))
print("{:.0f} mes(es)".format(meses))
print("{:.0f} dia(s)".format(dias))
