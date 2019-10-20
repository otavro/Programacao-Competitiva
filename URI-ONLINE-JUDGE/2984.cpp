#include <iostream>
#include <string.h>
#define MAX 100000

using namespace std;
int main()
{
    unsigned a=0, b=0;
    char assuntos[MAX];
    bool x = false;

    cin >> assuntos;
    for(int i=0; i<strlen(assuntos); i++)
    {
        if (assuntos[i] == ')' && x==true && a<b)
            a++;
        if(assuntos[i] == '('){ b++; x=true;};
    }
    (a-b)!=0 ? cout << "Ainda temos "<<b-a<<" assunto(s) pendente(s)!"<<endl : cout<<"Partiu RU!"<<endl;

    return 0;
}