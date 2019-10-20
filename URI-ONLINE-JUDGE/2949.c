#include <stdio.h>

int main()
{

    int n, i, hob=0, hum=0, elf=0, ana=0, mag=0;
    char c[100], op[1];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s%s", c, op[0]);
        fflush(stdin);
        if(op[0]=='A')
            ana++;
        else if(op[0]=='E')
            elf++;
        else if(op[0]=='H')
            hum++;
        else if(op[0]=='M')
            mag++;
        else if(op[0]=='X')
            hob++; 
    }
    printf("%d Hobbit(s)\n", hob);
    printf("%d Humano(s)\n", hum);
    printf("%d Elfo(s)\n", elf);
    printf("%d Anao(s)\n", ana);
    printf("%d Mago(s)\n", mag);

    return 0;
}