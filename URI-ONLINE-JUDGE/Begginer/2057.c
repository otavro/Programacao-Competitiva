#include <stdio.h>


int main()
{
    int h, t, f, res;

    scanf("%d %d %d", &h, &t, &f);
    res = h + t +f;
    if(res>=24)
        res = res - 24;
    else if(res<0)
        res = res+24;
    printf("%d\n", res);

    return 0;
}