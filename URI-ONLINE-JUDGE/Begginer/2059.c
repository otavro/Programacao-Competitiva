#include <stdio.h>

//odd impar

int main()
{

    int p, j1, j2, r, a, res;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    res = j1 + j2;
    if(r==1 && a ==1){
        printf("Jogador 2 ganha!\n");
    }
    else if(r==1 && a == 0)
         printf("Jogador 1 ganha!\n");
    else if(p==1)
    {
        if(res % 2==0)
            printf("Jogador 1 ganha!\n");
        else
            printf("Jogador 2 ganha!\n");            
    }
    else
    {
        if(res % 2==0)
            printf("Jogador 2 ganha!\n");
        else
            printf("Jogador 1 ganha!\n");
    }
        

    return 0;
}