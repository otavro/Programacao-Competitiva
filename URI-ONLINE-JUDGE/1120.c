#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    char a ,c[10000], temp[10000];
    int i, tam, j;
    bool zero;
    while (1)
    {
        zero = false;
        scanf("%c",a );
        fflush(stdin);
        scanf("%s", c);
        fflush(stdin);
        if(a=='0' && c[0]=='0')
            break;
        tam = strlen(c);
        j = 0;
        for(i=0; i<tam; i++)
        {
            if(a==c[i])
                {

                }
            else
            {    
             temp[j] = c[i];
                j++;
            }
        }
        printf("%s", temp);
        /*tam = strlen(temp);
        for(i=0; i<tam; i++)
        {
            if(temp[i]!='0')
            {
                zero = true;
                break;
            }           
        }
        if(zero==false)
            printf("0\n");
        else
            printf("%s\n", temp);
        */
    }
    


    return 0;
}