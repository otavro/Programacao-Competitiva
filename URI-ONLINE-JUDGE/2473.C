#include <stdio.h>

int main()
{
    int A[6], B[6], c=0, i, j;

    scanf("%d %d %d %d %d %d", &A[0], &A[1],&A[2],&A[3],&A[4], &A[5]);
    scanf("%d %d %d %d %d %d", &B[0], &B[1],&B[2],&B[3],&B[4], &B[5]);

    for(i=0;i<6; i++)
        for(j=0; j<6; j++)
            if (A[i] == B[j])
                c++;
    if(c<3)
        printf("azar\n");
    else if(c==3)
        printf("terno\n");
    else if(c==4)
        printf("quadra\n");
    else if(c==5)
        printf("quina\n");
    else if(c==6)
        printf("sena\n");

    return 0;
}