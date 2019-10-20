#include <stdio.h>

int main(){

     int num[10000];
    int i, cont, j, jont;
    
    jont = 0;
    cont = 0;
    scanf("%d", &i);

    for (j=0; j<i; j++){
        scanf("%d", &num[j]);
    }

    for (j=0; j<i; j++){
        if (num[j]>= 10 && num[j]<=20)
            cont++;
        else
            jont++;
        
    }

    printf("%d in\n", cont);
    printf("%d out\n", jont);


    return 0;
}