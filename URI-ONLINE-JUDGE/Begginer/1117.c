#include <stdio.h>


int main()
{
    int c=0; 
    float nota, media=0;

    while (c!=2)
    {
        scanf("%f", &nota);
        if(nota>0 && nota<=10)
        {
            media += nota;
            c++;
        }
        else
            printf("nota invalida\n"); 
    }
    printf("media = %.2f\n", media/2);

    return 0;
}