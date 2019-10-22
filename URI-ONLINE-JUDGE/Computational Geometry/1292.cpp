#include <stdio.h>
#include <math.h>

const double pi = atan(1.0)*4;

int main(){
    double x, k;
    
    k = sin((108*pi)/180) / sin((63*pi)/180);
    
    while(scanf("%lf",&x) != EOF)
        printf("%.10lf\n",k*x);
    
    return 0;
}