#include <stdio.h>

int main()
{

    long long a, b, res;

    while (1)
{    
        scanf("%lld %lld", &a, &b);
        if (a ==0 && b==0)
            break;
        res = a * b;
        printf("%lld\n", res);
}

    return 0;
}