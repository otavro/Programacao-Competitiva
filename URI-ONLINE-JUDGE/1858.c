#include <stdio.h>

int main()
{

    int i,n, T, menor=100, pos;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &T);
        if(T==menor)
        {
            
        }
        else if (T<menor)
        {
            menor =T;
            pos = i;
        }
    }
    printf("%d\n", pos);
    
    return 0;
}