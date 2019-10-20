#include <stdio.h>


int main()
{

    char a[1], b[1], c[1];
    scanf("%c", a);
    fflush(stdin);
    scanf("%c", b);
    fflush(stdin);
    scanf("%c", c);

    printf("A = %c, B = %c, C = %c\n", a[0], b[0], c[0]);
    printf("A = %c, B = %c, C = %c\n", b[0], c[0], a[0]);
    printf("A = %c, B = %c, C = %c\n", c[0], a[0], b[0]);
    return 0;
}