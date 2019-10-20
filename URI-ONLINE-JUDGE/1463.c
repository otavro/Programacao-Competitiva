#include <stdio.h>

int main()
{
    int i, j, n, x, y,z;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        z = x/2;
        for(j=0; j<x; j++)
        {
            scanf("%d", &y);
            if (j==z)
                z = y;
        }
        printf("Case %d: %d\n",i+1, z);
    }

    return 0;

}