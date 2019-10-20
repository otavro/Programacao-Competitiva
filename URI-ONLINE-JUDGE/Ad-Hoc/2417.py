#V - 3
# e - 1
# GOLS
cv, cem, cs, fv, fe, fs = input().split(' ')
cor = int(cv) *3 + int(cem)
flor = int(fv) * 3 + int(fe)
if cor > flor:
    print('C')
elif flor > cor:
    print('F')
else:
    if int(cs) > int(fs):
        print('C')
    elif int(fs) > int(cs):
        print('F')
    else:
        print('=')