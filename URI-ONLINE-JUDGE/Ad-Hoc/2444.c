#include <stdio.h>

int main()
{
    int n, i, tot, vol;

    scanf("%d %d", &tot, &n);

    for(i=0; i<n;i++)
    {
        scanf("%d", &vol);
        if(tot + vol > 100) tot = 100;
        else if(tot + vol > 0) tot += vol;
        else tot = 0;
    }
    printf("%d\n", tot);

    return 0;
}