#include <stdio.h>
#include <string.h>

int main()
{

    int n, i, j;
    char frase[10];

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", frase);
        fflush(stdin);
        j = strlen(frase);
        if(j==3)
        {
            if(frase[0]=='o' || frase[0]=='o' && frase[2]=='e' || frase[0]=='o' && frase[1]=='n' || frase[2]=='e')
                printf("1\n");
            else if(frase[0]=='t' || frase[2]=='o' && frase[0]=='t'|| frase[2]=='o')
                printf("2\n");
        }
        else
            printf("3\n");
    }


    return 0;
}