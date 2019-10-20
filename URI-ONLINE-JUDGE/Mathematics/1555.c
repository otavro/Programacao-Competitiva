#include <stdio.h>
#include<math.h>

int beto(int x, int y)
{
    int result;
    result = 2*pow(3*x, 2) + y*y;

    return result;
}
int rafael(int x, int y)
{
    int result;
    result = 2*pow(x, 2) + pow(5*y, 2);   
    return result;

}

int carlos(int x, int y)
{
    int result;
    result = -100 * x + pow(y, 3); 
    return result;
}

int main()
{
    int x, y, n;
        
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if (beto(x, y) > rafael(x, y) && rafael(x, y) > carlos(x, y))
            printf("Beto ganhou\n");
    else if (beto(x,y) > carlos(x, y) && carlos(x,y) > rafael(x,y))
            printf("Beto ganhou\n");
    else if (rafael(x,y) > beto(x, y) && beto(x,y) > carlos(x,y))
            printf("Rafael ganhou\n");
    else if (rafael(x,y) > carlos(x, y) && carlos(x,y) > beto(x,y))
            printf("Rafael ganhou\n");
    else if (carlos(x,y) > beto(x, y) && beto(x,y) > rafael(x,y))
            printf("Carlos ganhou\n");
    else if (carlos(x,y) > rafael(x, y) && rafael(x,y) > beto(x,y))
            printf("Carlos ganhou\n");
    }


    return 0;
}