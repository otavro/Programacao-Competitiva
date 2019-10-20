#include <stdio.h>

int main(){

    float num[6];
    int i, cont;

    cont = 0;
    for (i=0; i<=5; i++){
        scanf("%f", &num[i]);
    }
    for(i=0; i<=5;i++)
        if (num[i] > 0)
            cont++;
    printf("%i valores positivos\n", cont);

    return 0;
}