#include <stdio.h>

int main()
{

    int j, a, n, i; 
    float b, menor;

    while (scanf("%d", &a)!=EOF)
    {
        for(j=0; j<a; j++)
        {
            scanf("%f", &b);
            if (j==0)
                menor = b;
            if (b<menor)
                menor =b;
        }
        printf("%.2f\n", menor);
    }


    return 0;
}