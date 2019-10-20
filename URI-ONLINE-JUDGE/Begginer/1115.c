#include <stdio.h>

int main()
{
    float x, y;
    
    for(;;){
    
    
        scanf("%f %f",&x, &y);

        if (x == 0 && y == 0 )
            break;
        else if (x ==0 && y !=0)
            break;
        else if (y == 0 && x !=0)
            break;
        else if (x>0 && y>0)
            printf("primeiro\n");
        else if (x>0 && y<0)
            printf("quarto\n");
        else if (x<0 && y>0)
            printf("segundo\n");
        else
            printf("terceiro\n");
    }
    return 0;
}