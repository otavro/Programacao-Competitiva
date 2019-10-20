#include <stdio.h>



int main()
{
    int i;
    double N[100], x;
    scanf("%lf", &x);

    for(i=0; i<100; i++)
    {
        N[i]= x;
        printf("N[%d] = %.4lf\n", i, N[i]);
        x = x/2;
    }


    return 0;
}