#include <iostream>
#include <string.h>

using namespace std;

int comp(char a);

int main()
{

    char notas[200], a='H';
    int tam, x, cont, c;
    while (scanf("%s", notas)!=EOF)
    {
        fflush(stdin);
        cont = 0;
        tam = 0;
        c = strlen(notas);
        if (notas[0]=='*')
            break;
        for(int i =0; i<c; i++)
        {
            tam += comp(notas[i]);
            //printf("");//POR ALGUM MOTIVO QUANDO DELETA O PRINTF O CODIGO NÃO FUNCIONA
            if(notas[i]=='/')
            {
                if(tam==64)

                    cont++;
                    //printf("cont = %d\n", cont);
                tam = 0;
            }
        }
        printf("%d\n", cont);//FINAL
    }

    return 0;
}

int comp(char a)
{
    int res;
    if (a=='W')
        res = 64;
    else if(a=='H')
        res = 32;
    else if(a=='Q')
        res = 16;
    else if(a=='E')
        res = 8;
    else if(a=='S')
        res = 4;
    else if(a=='T')
        res = 2;
    else if(a=='X')
        res = 1;
    return res;
}