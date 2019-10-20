#include <stdio.h>

int main()
{

    int a, i;
    
    scanf("%d", &a);
    i = 0;
    while (i !=6)
    {
        if (a % 2 !=0)
        {
            i++;
            printf("%d\n",a);
        }
        a++;
    }
    

}