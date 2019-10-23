#include <stdio.h>
#include <string.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int comp(char *s1, char *s2, int n1, int n2)
{
    int LCSuff[51][51];
    int result = 0;
    int i, j;


    for (i = 0; i <= n1; ++i) {
        for (j = 0; j <= n2; ++j) {
            if (!i || !j)
                LCSuff[i][j] = 0;
            else if (s1[i-1] == s2[j-1]) {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            } else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    char frase1[52], frase2[52];
    int xPala, yPala;

    while (fgets(frase1, 52, stdin)) {
        fgets(frase2, 52, stdin);

        xPala = strlen(frase1) - 1;
        yPala = strlen(frase2) - 1;

        printf("%d\n", comp(frase1, frase2, xPala, yPala));
    }

    return 0;
}