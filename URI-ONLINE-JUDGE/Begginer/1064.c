#include <stdio.h>

int main(){

    float num[6], media;
    int i, cont;

    media = 0;
    cont = 0;
    for (i=0; i<=5; i++){
        scanf("%f", &num[i]);
    }
    for(i=0; i<=5;i++)
        if (num[i] > 0){
            cont++;
            media = media + num[i];}
    media = media/cont;
    
    printf("%i valores positivos\n", cont);
    printf("%.1f valores positivos\n", media);

    return 0;
}