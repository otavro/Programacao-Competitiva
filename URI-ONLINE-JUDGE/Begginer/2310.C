#include <stdio.h>
#include <math.h>

int main()
{
    int S, B, A, saqt=0, blot=0, atat=0;
    float X, Y,Z, a, b, c;
    int n, i;
    char nome[100];
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", nome);
        fflush(stdin);
        scanf("%d %d %d", &S, &B, &A);
        saqt += S; blot+=B; atat+=A;
        scanf("%d %d %d", &S, &B, &A);
        a += S; b += B; c += A;
    }
    printf("a=%d b=%d c=%d \n", a, b, c);
    printf("sq= %d, blot=%d, atat=%d \n", saqt, blot , atat);
    X = (a *100)/ saqt;
    Y = (b *100)/ blot;
    Z = (c *100)/ atat;

    printf("Pontos de Saque: %.2f %%.\n", X);
    printf("Pontos de Bloqueio: %.2f %%.\n", Y);
    printf("Pontos de Ataque: %.2f %%.\n", Z);

    return 0;
}