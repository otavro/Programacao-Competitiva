#include <stdio.h>

int main()
{
    int mat[20][100000];
    int x, y, i, j;

    i = 0; 
    j = 0;

    mat[0][0] = 1;

    scanf("%d %d", &x, &y);

    for(j=0; j < y; j++)
    {
        for(i=0; i < x; i++)
        {
            if(mat[i][j] == y+1)
                break;
            if (i == (x - 1))
                printf("%d",mat[i][j]);
            else printf("%d ", mat[i][j]);
            
            mat[i+1][j] = mat[i][j] + 1;
        }
    printf("\n");
     if(mat[i][j] == y+1)
            break;
    mat[0][j+1] = mat[x-1][j] + 1;
    }

    return 0;
}