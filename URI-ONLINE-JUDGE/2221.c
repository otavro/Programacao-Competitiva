#include <stdio.h>

int main()
{

    int n, i, B, ag, dg, lg, ad, dd, ld, guarde, dabriel;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &B);
        scanf("%d %d %d", &ad , &dd ,&ld);
        scanf("%d %d %d", &ag , &dg ,&lg);
        if (ld % 2 ==0)
            dabriel = ((ad + dd) / 2 ) + B;
        else
            dabriel = ((ad + dd) / 2 );
        if (lg % 2 ==0)
            guarde = ((ag + dg) / 2 ) + B;
        else
            guarde = ((ag + dg) / 2 );
        if(dabriel>guarde)
            printf("Dabriel\n");
        else if(guarde > dabriel)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }

    return 0;
}