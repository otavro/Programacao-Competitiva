#include <stdio.h>

int main()
{

    int num[100];//mudar
    int maior, pos;
    int c = 0;

    for(c; c<100; c++)
    {
        scanf("%d", &num[c]);

        if (c == 0)
        {
            maior = num[0];
            pos = 1;
        }
        else
        {
            if (maior < num[c])
            {
                maior = num[c];
                pos = c+1;
            }
        }
    }

    printf("%d\n",maior);
    printf("%d\n", pos);

    return 0;
}