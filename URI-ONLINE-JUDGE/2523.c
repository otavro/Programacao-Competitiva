#include <stdio.h>

int main()
{
    char frase[26], resp[10000];
    int n, i, x;


    while (scanf("%s", frase)!=EOF)
    {
        fflush(stdin);
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            x--;
            resp[i] = frase[x];
        }
        for(i=0; i<n; i++)
            printf("%c", resp[i]);
        printf("\n");
    }
    
}