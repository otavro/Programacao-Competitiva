#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    short mat, li, col;

    while (scanf("%hd", &mat)!=EOF)
    {
        for (li =0; li<mat; li++)
        {
            for(col =0; col<mat; col++)
            {
                if(li + col ==mat -1) 
                    printf("2");
                else if( li == col)
                    printf("1");
                else
                    printf("3");                    
            }
            printf("\n");
        }
        
    }
    




    return 0;
}