#include <stdio.h>



int main()
{
    int n, i, ped, qtd;
    float result = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &ped, &qtd);
        if (ped == 1001)
            result += 1.50 * qtd;
        else if (ped == 1002)
            result += 2.50 * qtd;
        else if (ped == 1003)
            result += 3.50 * qtd;
        else if (ped == 1004)
            result += 4.50 * qtd;
        else if (ped == 1005)
            result += 5.50 * qtd;
    }
    printf("%.2f\n", result);

    return 0;
}