#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j,k, tamA, tamB, p;
    char A[10000], B[100000];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        p=0;
        scanf("%s", A);
        fflush(stdin);
        scanf("%s", B);
        fflush(stdin);
        tamA = strlen(A); tamB = strlen(B);
        if(tamB > tamA)
            printf("nao encaixa\n");
        else
        {
            for(j=tamA-1, k=tamB-1;j>0 && k>=0; j--, k--)
            {
                if(A[j]== B[k])
                    p =1;
                else
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }

    return 0;
}