#include <stdio.h>

int main()
{
    int n, i=0, cycles;

    while (1)
    {
        i++;
        cycles = 0;
        scanf("%d", &n);
        if (n<0)
            break;
        else if (n%2==1)
            n--;
        while (n!=0)
        {
            if (n==1 || n==0)
                break;
            n -=2;
            cycles++;
        }
        printf("Experiment %d: %d full cycle(s)\n",i, cycles);

    }
    
    return 0;
}