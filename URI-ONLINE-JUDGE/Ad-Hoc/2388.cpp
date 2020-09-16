#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, v, d = 0;

    cin >> n;

    for(int i = 0; i <n ; i++){
        cin >> t >> v;
        d += t*v;
    }

    cout << d << "\n";

    return 0;
}