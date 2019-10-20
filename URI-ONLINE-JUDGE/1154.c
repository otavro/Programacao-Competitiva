#include <stdio.h>



int main()
{

    int x, c=0;
    float soma = 0;

    while (1)
    {
        scanf("%d", &x);
        if (x<0)
            break;
        else{ soma += x;
        c++;
        }
    }
    printf("%.2f\n", soma / c);

    return 0;
}