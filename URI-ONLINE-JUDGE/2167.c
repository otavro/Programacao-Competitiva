#include <stdio.h>

int main()
{

    int n, x, i, menor, o=0;

    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        if (i==0)
            menor = n;
        if (x < menor && o==0)
           { 
               o = i;
           }
        menor = x;
    }
        printf("%d\n", o == 0 ? o : o+1);

    return 0;
}