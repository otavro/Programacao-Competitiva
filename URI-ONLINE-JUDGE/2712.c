#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char placa[100];
    int n, i, j, tam;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", placa);
        fflush(stdin);
        tam = strlen(placa);
        if(tam<=8)
        {
            if(isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]))
            {
                if(placa[3]=='-')
                {
                    if(isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))
                    {
                        if (placa[7]=='1' || placa[7]=='2')
                            printf("MONDAY\n");
                        else if (placa[7]=='3' || placa[7]=='4')
                            printf("TUESDAY\n");
                        else if (placa[7]=='5' || placa[7]=='6')
                            printf("WEDNESDAY\n");
                        else if (placa[7]=='7' || placa[7]=='8')
                            printf("THURSDAY\n");
                        else if (placa[7]=='9' || placa[7]=='0')
                            printf("FRIDAY\n");
                    }
                    else
                        printf("FAILURE\n");
                }
                else
                    printf("FAILURE\n");
            }
            else
                printf("FAILURE\n");
        }
        else
            printf("FAILURE\n");
    }

    return 0;
}