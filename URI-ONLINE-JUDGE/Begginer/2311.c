#include <stdio.h>

int main()
{
    int i, n , j;
    float N[7];
    float dif ,maior, menor;
    char nome[100];   
    float soma;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        maior = 0, menor = 10;
        soma = 0;
        scanf("%s", nome);
        fflush(stdin);
        scanf("%f", &dif);
        scanf("%f %f %f %f %f %f %f", &N[0], &N[1],&N[2] ,&N[3] ,&N[4] ,&N[5] ,&N[6]);
        for (j=0; j< 7; j++)
        {
            if(N[j]< menor)
                menor = N[j];
            if(N[j]> maior)
                maior = N[j];
            soma +=N[j];
        }
        soma = ((soma - maior) - menor) * dif;
        printf("%s %.2f\n", nome, soma);
    }

    return 0;
}