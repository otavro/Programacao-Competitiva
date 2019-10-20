#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int n, i, j, tam;

    scanf("%d", &n);
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        scanf("%[^\n]s", a);
        fflush(stdin);
        tam = strlen(a);
        for(j=0; j<15; j++)
            {
                if (a[j] == 'G' || a[j]== 'Q' || a[j]== 'a' || a[j]== 'k' || a[j]== 'u')
                    printf("0");
                else if (a[j] == 'I' || a[j]== 'S' || a[j]== 'b' || a[j]== 'l' || a[j]== 'v')
                    printf("1");

                else if (a[j] == 'E' || a[j]== 'O' || a[j]== 'Y' || a[j]== 'c' || a[j]== 'm' || a[j]== 'w')
                    printf("2");

                else if (a[j] == 'F' || a[j]== 'P' || a[j]== 'Z' || a[j]== 'd' || a[j]== 'n' || a[j]== 'x')
                    printf("3");

                else if (a[j] == 'J' || a[j]== 'T' || a[j]== 'e' || a[j]== 'o' || a[j]== 'y')
                    printf("4");

                else if (a[j] == 'D' || a[j]== 'N' || a[j]== 'X' || a[j]== 'f' || a[j]== 'p' || a[j]== 'z')
                    printf("5");

                else if (a[j] == 'A' || a[j]== 'K' || a[j]== 'U' || a[j]== 'g' || a[j]== 'q')
                    printf("6");

                else if (a[j] == 'C' || a[j]== 'M' || a[j]== 'W' || a[j]== 'h' || a[j]== 'r')
                    printf("7");

                else if (a[j] == 'B' || a[j]== 'L' || a[j]== 'V' || a[j]== 'i' || a[j]== 's')
                    printf("8");

                else if (a[j] == 'H' || a[j]== 'R' || a[j]== 'j' || a[j]== 't')
                    printf("9");
            }
            printf("\n");
            fflush(stdin);
    }

    return 0;

}