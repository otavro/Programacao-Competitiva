#include <stdio.h>

#include <string.h>

int main()

{
    char frase[1000],frase1[1000];
    int i,k,j,n,m,l,T;
    scanf("%d",&T);
    getchar();
    while(T--) {
    gets(frase);
    k = strlen(frase);
    for(i=0;i<k;i++)
        if((frase[i]>='A' && frase[i]<='Z') || (frase[i]>='a'&& frase[i]<='z'))
            frase[i] = frase[i] + 3;
    n=0;
    for(j=k-1;j>=0;j--)
    {
        frase1[n] = frase[j];
        n++;
    }
    
    frase1[n] = '\0';
    l = k/2;

    for(i=l;i<k;i++)
        frase1[i] =  frase1[i] - 1;

    printf("%s\n",frase1);

    }

}