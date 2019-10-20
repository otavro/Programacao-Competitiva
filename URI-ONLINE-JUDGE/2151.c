#include <stdio.h>

int main()
{
    int a, b, c, d , i, n;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(c==1)
            printf("%02d:%02d - A porta abriu!\n", a, b);
        else
            printf("%02d:%02d - A porta fechou!\n", a, b);       
    }
}