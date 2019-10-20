#include <stdio.h>

int main()
{
    int n, x, y;
    int i = 0;
    int caiu = 0;
    scanf("%d", &n);
    
    while (i < n)
    {
        scanf("%d %d", &x, &y);
        if (x>y)
            caiu = caiu + y;
        i++;
    }
    printf("%d\n", caiu);


    return 0;
}