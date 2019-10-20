#include <stdio.h>

int main()
{
    int prod, qtd;
    float item[5];
    item[0] = 4.00;
    item[1] = 4.50;
    item[2] = 5.00;
    item[3] = 2.00;
    item[4] = 1.50;

    scanf("%d %d",&prod, &qtd);

    printf("Total: R$ %.2f\n",item[prod-1]*qtd);

    return 0;
}