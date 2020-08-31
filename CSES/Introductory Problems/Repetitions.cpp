#include <iostream>
#include <string>

#define REP(i, a, b) for (int i = a; i<b; i++)

using namespace std;

void longestRepetition(string phrase){
    int length = phrase.length();
    int tam = 1;
    int maior = 0;
    if (length > 1){
        REP(i, 1, length){
            if (phrase[i] == phrase[i-1])
                tam++;
            else 
                tam = 1;
            if (tam > maior)
                maior = tam;
        }
        cout << maior;
    }
    else
        cout << "1\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string phrase;
    cin >> phrase;
    longestRepetition(phrase);
    return 0;
}