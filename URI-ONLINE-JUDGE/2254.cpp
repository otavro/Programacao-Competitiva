#include <iostream>
#include <stdio.h>

int main()
{
    int x, res;

    while (scanf("%d", &x)!=EOF)
    {
        if (x % 8 == 1 || x % 8==2 || x % 8 == 4 || x % 8 == 7)
            printf("she loves me\n");
        else if(x % 8 ==0 || x  % 8 == 3 || x  % 8 ==5 || x % 8 == 6)
            printf("she loves not\n");
    }
    return 0;
}