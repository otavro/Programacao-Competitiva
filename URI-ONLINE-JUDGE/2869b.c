#include <stdio.h>

int main(){

    long long N[100] = {1,2,4,6,16,
    12,64,24,36,48,1024,60,4096,192,144,120,65536,180,262144,240,
    576,3072,4194304,360,1296,12288,900,960,268435456,720,73741817,840,9216,196608,5184,1260,719476260,786432,36864,1680,511620083,2880,
    46480318,15360,3600,12582912,743685088,2520,46656,6480,589824,61440,595845303,6300,82944,
    6720,2359296,805306368,134099126,5040,536396504,221225451,14400,7560,331776,46080,329376018,
    983040,37748736,25920,270016253,10080,80065005,158428766,32400,3932160,746496,184320,
    124160285,15120,44100,534860242,986564553,20160,5308416,139440954,415919090,107520,140130951,
    25200,2985984,62914560,663676353,231055250,21233664,27720,873523211,233280,230400,45360};
    int n, x, i;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        if(x<=0 || x>100)
            printf("0\n");
        else
        {
            printf("%lld\n", N[x-1]);
        }
    }
}