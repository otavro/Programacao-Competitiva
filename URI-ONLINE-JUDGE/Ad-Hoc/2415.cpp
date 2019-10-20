#include <iostream>

using namespace std;

int main()
{
    int n,x, tam=0,l ,maior=0;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if (i ==0)
            tam++;

        else if (x == l)
        {
            tam++;
        }
        else
            tam = 0;          
        if (tam> maior)
            maior = tam;
        l = x;
    }
    cout << maior+1 << '\n';

    return 0;
}