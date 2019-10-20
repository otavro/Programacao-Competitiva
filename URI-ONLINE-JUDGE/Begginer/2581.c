#include <stdio.h>

int main()
{

    char pergunta[100];
    int i, n;
    scanf("%d", &n);
    getchar();

    for(i=0; i<n; i++)
    {
        scanf("%[^\n]s", pergunta);
        printf("I am Toorg!\n");
        getchar();
    }



    return 0;
}