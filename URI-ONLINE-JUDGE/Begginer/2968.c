#include <stdio.h>
#include <math.h>


int main()
{
    int V, N;
    float res;

    scanf("%d %d", &V, &N);
    res = V*N;
    printf("%.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f\n",
    ceil((res *10) /100),
    ceil((res *20) /100),
    ceil((res *30) /100),
    ceil((res *40) /100),
    ceil((res *50) /100),
    ceil((res *60) /100),
    ceil((res *70) /100),
    ceil((res *80) /100),
    ceil((res *90) /100));

    return 0;
}