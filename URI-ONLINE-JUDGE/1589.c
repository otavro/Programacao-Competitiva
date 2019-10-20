#include <stdio.h>


int main()
{
    int i, j, x, y;

    scanf("%d", &i);
    for(j=0; j<i; j++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", x+y);
    }




    return 0;
}