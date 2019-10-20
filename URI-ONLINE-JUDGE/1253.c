#include <stdio.h>
#include <string.h>

int main()
{
    char ALF[50], CESA[50];
    int n, crip, tam, i, j;

    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%s", ALF);
        fflush(stdin);
        scanf("%d", &crip);

        tam = strlen(ALF);
        for(j=0; j<tam; j++)
        {
            if(ALF[j]<65)
                ALF[j] = ALF[j] + 26;
            ALF[j] = ALF[j] - crip;
            if(ALF[j]<65)
                ALF[j] = ALF[j] + 26;
        }
        printf("%s\n", ALF);
    }

    return 0;
}