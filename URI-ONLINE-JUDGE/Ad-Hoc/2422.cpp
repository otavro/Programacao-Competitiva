#include <iostream>
#define MAX 100010
using namespace std;

int vet[MAX], n;

void somaBIN(int soma)
{
    int ini = 0, fim = n-1, meio;
    while (ini < fim){
        int s = vet[ini] + vet[fim];
        if (s == soma){
            cout<< vet[ini] << " " << vet[fim] << "\n";
            break;
        }
        if (s > soma) fim--;
        else if (s<soma) ini++;
        }
}

int main(){
    cin >> n; 
    for(int i = 0; i<n;i++) cin >> vet[i];
    int soma;
    cin >> soma;

    somaBIN(soma);

}