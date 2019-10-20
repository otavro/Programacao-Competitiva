    #include <stdio.h>

    int main()
    {

        int C, P, F, res;

        scanf("%d %d %d", &C, &P, &F);

        res = P /F;
        res = res - C;
        
        if (res>= 0)
            printf("S\n");
        else
            printf("N\n");    


        return 0;
    }
