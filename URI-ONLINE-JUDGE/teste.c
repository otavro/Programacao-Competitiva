// Program to print all prime factors 
# include <stdio.h> 
# include <math.h> 
  
// A function to print all prime factors of a given number n 
    int primeFactors(int n) 
{ 
    int contdois =0;
    int cont[100];
    int j =0;
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        //printf("%d ", 2); 
        n = n/2;
        contdois++; 
    } 
    contdois++;
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            //printf("%d ", i);
            j++; 
            n = n/i; 
        } 
        contdois *= (j+1);
    } 
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2)
    {
        //printf ("%d ", n);
        contdois*=2;
    }
    return contdois;
} 
  
/* Driver program to test above function */
int main() 
{ 
    int n = 36; 
    int a = primeFactors(n); 
    printf("%d\n", a);
    return 0; 
} 