#include <iostream>
#include <algorithm>
#include <vector>
#define all(x) x.begin() x.end()

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    vector <string> results;
    cin >> a;

    sort(a.begin(), a.end());
    do{
        results.push_back(a);

    }while (next_permutation(a.begin(), a.end()));

    cout << results.size() << "\n";

    for(int i = 0; i < results.size(); i++){
        cout << results[i] <<"\n";
    }


    return 0;
}
