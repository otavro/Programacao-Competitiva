#include <stdio.h>
#include <math.h>


int main(){
    int n, x, i;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
            scanf("%d", &x);
            printf("%lld kg\n", (long long)(pow(2,x)/12000));
    }
    
    return 0;
}