#include <stdio.h>

int main()
{
    int n, i, a, b;
    char c;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d%c%d", &a, &c, &b);
        if(a==b)
            printf("%d\n", a*b);
        else if(c>='A' && c<='Z')
            printf("%d\n", b-a);
        else
            printf("%d\n", b+a);
    }

    return 0;
}