#include <stdio.h>
#include <math.h>

int main()
{
    int n, result;
    scanf("%d", &n);

    result = (1/24) * n * (n*n*n - 6*n*n + 23*n -18) +1;

    printf("%d\n", result);

    return 0;
}