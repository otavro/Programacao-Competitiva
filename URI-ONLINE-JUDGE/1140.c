#include <stdio.h>
#include <string.h>

int main()
{

    char frase[1500];

    while(1)
    {
        gets(frase);
        if(frase[0]=='*') break;
        else
        {
            int tam, i,j,cndtn=1;
            char salvo[2];
            tam=fraselen(frase);
            if(frase[0]>=65 && frase[0]<=90)
                salvo[0]=frase[0]+32;
            else if(frase[0]>=97 && frase[0]<=122)
                salvo[0]=frase[0]-32;
            for(i=1; i<tam; i++)
            {
                if(frase[i]==' ')
                {
                    if(frase[i+1]==frase[0] || frase[i+1]==salvo[0])
                        continue;
                    else{
                        cndtn=0;
                        break;
                    }
                }
            }
            if(cndtn==1) printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}