#include <stdio.h>

int main(){

     int num[5];
    int i, cont;
    cont = 0;

    for (i=0; i<=4; i++){
        scanf("%d", &num[i]);
    }

    for (i=0; i<=4; i++){
        if (num[i]% 2 == 0)
            cont++;
    }
    printf("%d valores pares\n", cont);


    return 0;
}