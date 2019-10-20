#include <stdio.h>


int main()
{
    int n;
    int c = 1;

    scanf("%d",&n);

    for(c; c<=10000; c++)
    {
        if (c % n == 2)
            printf("%d\n", c);
    }



    return 0;
}