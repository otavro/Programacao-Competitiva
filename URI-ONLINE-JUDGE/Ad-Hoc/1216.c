#include <stdio.h>
#include <string.h>
 
int main (){
int cont;
char nome[100];
double valor = 0, d;
 
cont = 0;
while (gets(nome)){
scanf ("%lf%*c",&d);
valor = valor + d;
cont = cont + 1;
}
 
printf ("%.1lf\n", valor/cont);
return 0;
}