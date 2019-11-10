/*
USANDO ALGORIMTO GULOSO NÃO FUNCIONOU
PRECISA DE PROGRAMACAO DINAMICA
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minBlocks(vector <int> &blocos, int tot)
{
    int tam = blocos.size() - 1;
    int qtd = 0;
    while(tot > 0)
    {
        if (tot - blocos[i] >= 0){
            tot -= blocos[i];
            qtd++;
            }
        else 
            tam--;
    }
    return qtd;
}


int main()
{

    int n, a, cases, tot;

    cin >> n;

    for(int c = 0; c<n; c++)
    {
        vector <int> blocos;
        cin >> cases >> tot;
        for(int i = 0; i < cases; i++)
        {
            cin >> a;
            blocos.push_back(a);
        }
        min(blocos.begin(), blocos.end())
        //sort(blocos.begin(), blocos.end());
        cout << minBlocks(blocos, tot) << "\n";
    }


    return 0;
}

