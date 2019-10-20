#include <stdio.h>
 

int main()
{
    double V , D , R, AREA, ALTURA, pi = 3.14;
    pi = 3.14;
    while (scanf("%lf", &V)!=EOF)
    {
        scanf("%lf", &D);
        R = D/2;
        ALTURA = V /( pi * R*R);
        AREA = pi * R*R;

        printf("ALTURA = %.2lf\n", ALTURA);
        printf("AREA = %.2lf\n", AREA);
    }

    return 0;
}