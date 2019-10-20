#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    double menor;
    double maior;
    double medio;

    scanf("%lf %lf %lf", &a, &b, &c);

    maior = a;

    if (b > maior || b == maior){
        medio = maior;
        maior = b;
    }
    if (b > menor && b < maior){
        medio = b;
    }
    if (b < maior){
        medio = b;
    }
    if (c > maior || c == maior){
        menor = medio;
        medio = maior;
        maior = c;
    }
    if (c > medio && c < maior){
        menor = medio;
        medio = c;
    }
    if (c < medio){
        menor = c;
    }

    if ( maior >= (menor+medio) ){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } else {
    if ( pow(maior,2) == ( pow(medio,2) + pow(menor,2) ) ) {
        printf("TRIANGULO RETANGULO\n");
    }
    if ( pow(maior,2) > ( pow(medio,2)+pow(menor,2) ) ) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ( pow(maior,2) < ( pow(medio,2) + pow(menor,2) ) ) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if ( maior == medio && medio == menor ){
        printf("TRIANGULO EQUILATERO\n");
    }
    if ( (maior == medio && maior != menor) || (maior == menor && maior != medio) || (menor == medio && medio != maior) ){
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}