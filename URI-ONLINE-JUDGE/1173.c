#include <Stdio.h>

int main()
{
    int N[10], v;
    int i = 0;

    scanf("%d", &v);
    N[0] = v;

    for(i; i < 10; i++)
    {
    printf("N[%d] = %d\n",i, N[i]);
    N[i+1] = N[i] + v;
    v = N[i+1];
    }

    return 0;
}