#include <iostream>

using namespace std;

void imprimirPar(int i);
void imprimirImpar(int i);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i;

    cin >> i;

    if (i == 1)
        cout << 1 << "\n";
    else if (i == 2 || i == 3)
        cout << "NO SOLUTION\n";
    else if(i==4)
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << "\n";
    else{
        
        imprimirPar(i);
        imprimirImpar(i);
    }

    return 0;
}

void imprimirPar(int i){
    if (i % 2 == 1)
        i--;
    for(; i >= 2;){
        cout << i <<" ";
        i = i - 2;
    }
}

void imprimirImpar(int i){
    if (i % 2 == 0)
        i--;
    for(; i > 1;){
        cout << i <<" ";
        i = i - 2;
    }
    cout << "1\n";
}