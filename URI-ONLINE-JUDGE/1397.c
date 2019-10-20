#include <stdio.h>


int main()
{
    int i, n=1, a,b, ap, bp;

    while (n!=0)
    {
        ap = 0; bp = 0;
        scanf("%d", &n);
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            scanf("%d %d", &a, &b);
            if (a > b)
                ap++;
            else if(b > a)
                bp++;
            else if (a==b)
                ap+=0;
        }
        printf("%d %d\n", ap, bp);
    }
    

    return 0;
}