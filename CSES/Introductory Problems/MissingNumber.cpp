#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector <int> v;
    int a, aux;
    cin >> a;
    a--;
    for(int i = 0; i <a; i++){
        cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(), v.end());

    int j = 1;

    for(const auto &i: v){
        if (j != i){
            cout << j << "\n";
           return 0;
        }
        j++;
    }
    cout << j << "\n";
    return 0;
}