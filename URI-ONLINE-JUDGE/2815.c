#include <string.h>
#include <stdio.h>

int main()
{
    char frase[100000];
    int i, tam, n, j;
    
    scanf("%[^\n]s", frase);
    tam = strlen(frase);
    fflush(stdin);
    for(i=0; i<tam; i++)
    {
        if(frase[i]==frase[i+2] && frase[i+1] == frase[i+3])
        {
            printf("%c%c",frase[i], frase[i+1]);
            i = i+3;
        }
        else
        {
            printf("%c", frase[i]);
        }
    }
    printf("\n");

    return 0;
}