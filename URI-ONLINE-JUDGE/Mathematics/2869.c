#include <stdio.h>
#include <math.h>

int primo(int a);
int fatorial(int n);
long long primeFactors(long long n);

int main()
{

    int n, i, j, y, restos;
    long long x, c;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        c = 0;
        scanf("%d", &x);
        while (1)
        {
            if (x==1)
            {
                c =1;
                break;
            }
            else if(x<=0 || x>100)
                c = 0;
            restos = 0;
            c++;
            for(j=1; j<=c; j++)
            {
                restos = primeFactors(c);
                if (primo(c)==0)
                {
                    restos = 2;
                    break;
                }
                else if (c % j == 0)
                    restos++;
                if(restos > x)
                    break;
            }
            if (restos == x)
                break;
        }
        printf("%d\n", c % 1000000007);
    }

    return 0;
}

int primo(int a){
 int i, resultado = 0;

 for (i = 2; i <= a / 2; i++) {
    if (a % i == 0) {
       resultado++;
       break;
    }
 }
 return resultado;
}
 
int fatorial(int n) {
    int resultado;
    if (n == 0)
        resultado = 1;
    else
        resultado = n*fatorial(n-1);

    return resultado;
}


long long primeFactors(long long n) 
{ 
    int contdois =0;
    int j =0;
    while (n%2 == 0) 
    {  
        n = n/2;
        contdois++; 
    } 
    contdois++;
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            j++; 
            n = n/i; 
        } 
        contdois *= (j+1);
    } 
    if (n > 2)
    {
        contdois*=2;
    }
    return contdois;
} 
  