#include <stdio.h>
#define min(a,b) (a<b)? a:b

int mat[101][101];

int abs(int a)
{
    return (a>0)?a:(-1)*a;
}

int main(int argc, char const *argv[])
{
    int m,n,i,j;
    int a,b,c,d;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                scanf("%d",&mat[i][j]);
                if(mat[i][j]==1)
                {
                    a=i,b=j;
                }
                if(mat[i][j]==2)
                {
                    c=i,d=j;
                }
            }
        }
        int res = 0;
        res = abs(d - b) + abs(c - a);
        printf("%d\n",res);  
    }
    return 0;
}