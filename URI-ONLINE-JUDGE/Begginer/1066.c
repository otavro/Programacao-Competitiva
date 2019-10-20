#include <stdio.h>


int main(){

    int x[5], neg, pos, imp, par;
    int i = 0;
    par =0;
    imp = 0;
    pos = 0;
    neg = 0;
    
    for(i; i<5; i++)
        scanf("%d", &x[i]);

    i = 0;

    for(i; i<5; i++)
    {
        if (x[i] % 2 ==0)
            par++;
        else     
            imp++;
    }        

    i = 0;

    for(i; i<5; i++)
    {
        if (x[i] > 0)
            pos++;
        else if(x[i] < 0)    
            neg++;
    }        
        
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
        

    return 0;

}



