#include <stdio.h>
#include <math.h>

int main()
{
    int C, B, P, RC, RB, RP, res=0;

    scanf("%d %d %d", &C, &B, &P);
    scanf("%d %d %d", &RC, &RB, &RP);
    if(C - RC < 0)
        res += abs(C-RC);
    if(B - RB < 0)
        res += abs(B-RB);
    if(P - RP < 0)
        res += abs(P-RP);
    printf("%d\n", res);

    return 0;
}