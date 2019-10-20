#include <stdio.h>


int main(){

     int num[10000], num2[10000];
    int i, j;
    float divi, x, y;

    scanf("%d", &i);

    for (j=0; j<i; j++)
        scanf("%d %d", &num[j], &num2[j]);
    

    for (j=0; j<i; j++)
    {
 

        if (num2[j] == 0)
            printf("divisao imposivel\n");

        else if (num[j] == 0)
            printf("0.0\n");

        else
        {
            x = num[j];
            y = num2[j];
            divi = x/y;
            printf("%.1f\n", divi);
        }
    } 
    

    return 0;
}