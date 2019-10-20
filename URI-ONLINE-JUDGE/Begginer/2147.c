#include<stdio.h>
#include<string.h>

int main()
{
    int c, i;
    char galo[10000];
    float result;

    scanf("%d", &c);

    for(i=0; i<c; i++)
    {
        scanf("%s", galo);
        result = strlen(galo);
        result = result/100;
        printf("%.2f\n", result);
    }

    return 0;
}