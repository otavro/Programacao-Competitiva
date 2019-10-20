#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50];
    int tam, i;

    while (scanf("%[^\n]s", frase)!=EOF)
    {
        fflush(stdin);
        tam = strlen(frase);
        for(i=0; i<tam; i++)
        {
            if(frase[i]>=65 && frase[i]<=77 || frase[i]>=97 && frase[i] <=109)
                printf("%c",frase[i]+13);
            else if(frase[i]>=78 && frase[i]<=90 || frase[i]>=110 && frase[i] <=122)
                printf("%c", frase[i]-13);
            else
                printf("%c", frase[i]);            
        }
        printf("\n");
    }
   


    return 0;
}