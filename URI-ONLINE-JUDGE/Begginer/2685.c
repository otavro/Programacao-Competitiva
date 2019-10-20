#include <stdio.h>

int main()
{
    int a;

    while (scanf("%d", &a)!=EOF)
    {
    if(a>=0 && a<90 || a==360)
        printf("Bom Dia!!\n");
    else if(a>=270 && a<360)
        printf("De Madrugada!!\n");
    else if(a>=90 && a<180)
        printf("Boa Tarde!!\n");
    else
        printf("Boa Noite!!\n");  
    }
    



    return 0;
}