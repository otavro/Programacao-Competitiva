#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;

    cin >> a;

    int count = 0;

    for(int i=5; a/i > 0; i*=5){
        count = count + a/i; 
    }

    cout << count <<"\n";

    return 0;
}
