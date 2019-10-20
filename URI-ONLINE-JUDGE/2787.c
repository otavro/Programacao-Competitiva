#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);  

    if ((x % 2 ==0) && (y % 2 ==0))
        printf("1\n");
    else if ((x % 2==0) && (y % 2 !=0))
        printf("0\n");
    else if ((x % 2 !=0) && (y%2==0))
        printf("0\n");
    else
        printf("1\n");    

    return 0;
}