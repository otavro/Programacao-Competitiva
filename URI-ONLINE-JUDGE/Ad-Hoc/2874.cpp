#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string.h>

using namespace std;

int convertBinary(long long n);

int main()
{
    long long bin, tam;
    int n;
    char frase[10000];

    while(scanf("%d", &n)!=EOF)
    {
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &bin);
            frase[i] = convertBinary(bin);
        }
        for (int i = 0; i<n; i++)
            printf("%c", frase[i]);
        printf("\n");
    }

    return 0;
}

int convertBinary(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /=10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}