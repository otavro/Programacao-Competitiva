#include <stdio.h>
#include <String.h>

int main()
{
    char money[1000000000], cents[2];
    int tam, i ,j, x ,y ,z;


    while (fgets(money, 1000000000, stdin)!=EOF)
    {
        fflush(stdin);
        scanf("%s", cents);
        //fgets(cents, 2, stdin);
        tam = strlen(money);
        printf("$");
        for(i=0, x=0; i<tam;)
        {
            if(i == tam-3)
                printf(".");
            if(x==2)
            {
                if(i>tam-3)
                    break;
                printf(",");
                x = 0;
            }
            printf("%c", money[i]);
            x++;
        }

    }
    



    return 0;
}