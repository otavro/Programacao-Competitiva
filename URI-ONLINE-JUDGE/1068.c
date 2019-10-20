#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[10000];
    int tam, i , abt, fch;
    
    while(scanf("%s",entrada)!=EOF)
    {
        fflush(stdin);
        abt =0; fch =0;
        tam = strlen(entrada);
        for(i=0; i<tam; i++)
        {
            if(entrada[i] == ')')
                fch++;
            if(fch>abt)
                break;
            if(entrada[i] == '(')
                abt++;
        }
        if(abt!=fch)
            printf("incorrect\n");
        else
            printf("correct\n");        
    }



    return 0;
}