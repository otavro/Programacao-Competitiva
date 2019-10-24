//BISSEXTO %4 e !%100 e %400 //This is leap year
//HULUCULU %15 // This is huluculu festival year.
//BULUKULU DIVI 55 desde Bissexto  //This is bulukulu festival year.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int unsigned long ano; 

    while (scanf("%lu", &ano)!=EOF)
    {
    if (ano %4 ==0 && ano%100 !=0 || ano %4 ==0 && ano%100 !=0 && ano%400 ==0)
        {
            if (ano%55==0)
                printf("This is bulukulu festival year.");
            else
                printf("This is leap year.\n");

        }
    else
        {
            if(ano %15 ==0)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }

    return 0;
}