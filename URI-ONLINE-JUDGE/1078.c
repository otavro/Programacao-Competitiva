#include <stdio.h>

int main()
{

    int c, n;

    scanf("%d", &n);
    c = 1;
    for(c; c<=10; c++)
        printf("%d x %d = %d\n",c, n, n*c);


    return 0;
}