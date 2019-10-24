#include <stdio.h>

int mmc(int n1, int n2)
{
    int resto;
    n1 > n2 ? resto=n1%n2 ? resto = n2 % n1;
              while(resto!=0)
              {
                  n1    = n2;
                  n2    = resto;
                  resto = n1%n2;         
              }
    return resto;
}