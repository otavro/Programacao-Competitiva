#include <stdio.h>

int main()
{

    int vet[10];
    int c = 0;

    for(c; c<10; c++){
        scanf("%d", &vet[c]);
        printf("X[%d] = %d\n",c, vet[c]);
    }
      

    return 0;
}