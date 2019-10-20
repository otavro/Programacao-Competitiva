#include <stdio.h>

int main()
{
    float a, b, c, peri, area;
    scanf("%f %f %f",&a, &b, &c);

    if((a+b) > c && (a+c)>b && (b+c) > a)
    {
        peri = a + b +c;
        printf("Perimetro = %.1f\n", peri);
    }
    else
    {
        area = ((a + b)*c)/2;
        printf("Area = %.1f\n", area);
    }    

    return 0;
}