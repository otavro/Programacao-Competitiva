#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, tam, metade;
    char frase[102], arrumado[101];

    scanf("%d", &N);
    getchar();

    for (i = 0; i < N; ++i) {
        fgets(frase, 102, stdin);

        tam = strlen(frase) - 1;
        metade= tam / 2 + tam % 2;

        for (j = metade- 1; j >= 0; --j)
            arrumado[metade- j - 1] = frase[j];

        for (j = tam - 1; j >= metade; --j)
            arrumado[tam - j - 1 + metade] = frase[j];

        arrumado[tam] = '\0';
        puts(arrumado);
    }

    return 0;
}