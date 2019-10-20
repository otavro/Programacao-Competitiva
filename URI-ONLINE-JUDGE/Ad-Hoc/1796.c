#include <stdio.h>

int main()
{
    int n, i, op, S=0, N=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &op);
        if(op==1)
            S++;
        else
        {
            N++;
        }
        
    }
    if(S> N)
        printf("N\n");
    else if (N >S)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}