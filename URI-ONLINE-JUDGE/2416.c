#include <stdio.h>


int main()
{
    int a, b;

    scanf("%d %d", &b, &a);
    
    while (b>=a)
    {
        b = b - a;
    }
        printf("%d\n", b);


    return 0;
}