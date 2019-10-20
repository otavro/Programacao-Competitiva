#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int tam=0, i, a;
    char frase[50];

    while (1)
    {
        scanf("%[^\n]s", frase);
        fflush(stdin);
        tam = strlen(frase);
        if (tam==1)
            break;
        a = 2;
        for(i=0;i<tam; i++)
        {
            if(frase[i]==' ')
                a++;
            else if(frase[i] >= 90 && a%2==0)
                frase[i] = frase[i] - 32;
            a++;
        }
        printf("%s\n", frase);
    }

    return 0;
}