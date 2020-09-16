#include <iostream>
#include <cmath>
using namespace std;

void divisor(long long a, long long b, long long c, long long d){
    long long n;
    int i = 1;
    int sqrtC = sqrt(c);

    for(int i=1; i <= sqrtC; i++){
        n = a * i;
        if(n % b !=0){
            if(c % n == 0 && d % n !=0){
                cout << n << "\n";
                return;
            }
        }
  
    }
    cout << -1 << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, d;

    cin >> a >> b >> c >> d;
    divisor(a, b, c, d);


    return 0;
}