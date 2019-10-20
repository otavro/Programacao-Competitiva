#include <stdio.h>


int main()
{
    int N[1000];
    int n;
    scanf("%d", &n);
    int i, j=0;
    for(i=0; i< 1000; i++)
    {
        if(j==n)
            j=0;
        N[i] = j;
        printf("N[%d] = %d\n",i, N[i]);
        j++;
    }
    return 0;
}