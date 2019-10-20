#include<stdio.h>

int main()
{
    char curso[100];
    int n, i;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", curso);
        fflush(stdin);
    }
    printf("Ciencia da Computacao\n");

    return 0;
}