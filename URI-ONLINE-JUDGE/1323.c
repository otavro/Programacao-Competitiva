#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, res;

    while (1)
    {
        res = 0;
        scanf("%d", &n);
        if (n==0) break;
        for(i=1; i<=n; i++)
            res += pow(i, 2);
        printf("%d\n", res);
    }
    



    return 0;
}