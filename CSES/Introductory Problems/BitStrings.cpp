#include <iostream>

const int mod = 1e9 +7;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int b;
    long long a = 1;

    cin >> b;
    if (b == 1)
        cout << 2 << "\n";
    else {
        for(int i =0 ; i < b ; i++){
            //a = (a % md) * 2;
            a = (a << 1 ) % mod;
        }
        cout << a % mod << "\n";
    }

    return 0;
}