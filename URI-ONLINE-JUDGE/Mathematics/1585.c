#include <stdio.h>

int main()
{

    int n, i, a, b, res;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        res = (a*b)/2;
        printf("%d cm2\n", res);

    }

    return 0;
}