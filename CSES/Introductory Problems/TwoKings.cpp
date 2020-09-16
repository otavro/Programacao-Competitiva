#include <iostream>
#include <stack>

using namespace std;

int main(){

    long long a;

    cin >> a;

    long long b = 1;
    for(;b<=a ; b++)
        cout << (b*b)*((b*b)-1) / 2 - 4*(b-1)*(b-2) << "\n";


    return 0;
}