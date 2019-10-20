#include <stdio.h>

int main(){

     int num[10000];
    int i, j;

    scanf("%d", &i);

    for (j=0; j<i; j++){
        scanf("%d", &num[j]);
    }

    for (j=0; j<i; j++){
        if (num[j] == 0 ) 
            printf("NULL\n");
        else if (num[j] % 2 == 0)
        {
            if (num[j]< 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("EVEN POSITIVE\n");
        }
        
        else
        {
            if (num[j] < 0)
                printf("ODD NEGATIVE\n");
            else
                printf("ODD POSITIVE\n");                     
        } 
    }
    return 0;
}