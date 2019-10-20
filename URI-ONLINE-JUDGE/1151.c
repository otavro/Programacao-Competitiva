#include <stdio.h>

int main()
{
    int n, x,y,aux;
    int c = 0;
    x=0;
    y=1;
    aux = 0;

    scanf("%d", &n);

    for(c; c<n; c++)
    {
        if(c==n)
            printf("%d\n", x);
        else
        {
            printf("%d ", x);
        }
    aux = x + y;
    y = x;
    x = aux;

    }

    return 0;
}