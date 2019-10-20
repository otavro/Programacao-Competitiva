#include <stdio.h>
#include <math.h>
int main()
{
    int T, A, n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &T);
        if(T==2015)
            printf("1 A.C.\n");
        else if(T <= 0 && T<2015)
            printf("%d D.C.\n", abs(2015 - T) );
        else
            printf("%d A.C.\n", T - 2014);       
    }


    return 0;
}