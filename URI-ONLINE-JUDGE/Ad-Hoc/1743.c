#include <stdio.h>

int main()
{
    int A[5], B[5], c=0, i;

    scanf("%d %d %d %d %d", &A[0], &A[1],&A[2],&A[3],&A[4]);
    scanf("%d %d %d %d %d", &B[0], &B[1],&B[2],&B[3],&B[4]);
    for(i=0; i<5; i++)
        if(A[i]==B[i])
            c = 1;
    if(c==0)
        printf("Y\n");
    else
        printf("N\n");
            
    return 0;
}