#include <stdio.h>
#include <string.h>
#include <math.h>

int fatorial(int num) {
    if (num >= 0) {
        int fat = 1;
        while (num > 0) {
            fat *= num;
            num--;
        }
        return fat;
    } else {
        return -1;
    }
}

int anagram(char palavra[1000000]) //função que ira comparar as palavras e retornara um int
{
    int result = 1;
    int comp;
    int letra = 97;
    int cont = 0;
    int j = 0;
    int fato;

    comp = strlen(palavra);

    for (letra; letra<=122; letra++)
    {
    cont = 0;
    j = 0;
        for(j; j < comp; j++)
        {
            if(palavra[j] == letra)
                cont++;          
        }
    if (cont > 1)
    {
        fato = fatorial(cont);
        result = result * fato;
    }
    }
    return result;
}



int main()
{

    char palavra[100000];
    int divi, quoc;
    int result;

    scanf("%s", palavra);

    divi = anagram(palavra);
    quoc = fatorial(strlen(palavra));
    //result = divi /quoc;
   // printf("%d\n", divi);
    //printf("%d\n", quoc);
    result = quoc * pow(divi, -1);


    printf("%d\n", result);


    

    return 0;
}

