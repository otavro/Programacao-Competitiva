#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double c, i, jursim, jurcom, dif;
    int t;

    while (scanf("%lf", &c)!=EOF)
    {
        scanf("%lf", &i);
        scanf("%d", &t);
        jursim = c * i *t ;
        jurcom = (c * pow((1+i), t))-c;
        if (jursim > jurcom)
            dif = jursim - jurcom;
        else
            dif = jurcom - jursim;
        printf("DIFERENCA DE VALOR = %.2f\n", dif);
        printf("JUROS SIMPLES = %.2f\n", jursim);
        printf("JUROS COMPOSTO = %.2f\n", jurcom);
    }
    return 1;
}
