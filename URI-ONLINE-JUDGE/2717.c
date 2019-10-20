#include <stdio.h>


int main()
{
    int tot, a, b;

    scanf("%d", &tot);
    scanf("%d %d", &a, &b);

    if(tot >= a+b)
            printf("Farei hoje!\n");
    else 
        printf("Deixa para amanha!\n");

    return 0;
}