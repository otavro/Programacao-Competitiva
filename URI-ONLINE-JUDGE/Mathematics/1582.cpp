#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    int r = 0;
    do{
        r = b % a;
        b = a;
        if(r)
            a = r;
    } while (r != 0); 
    
    return a;
}

int main(){
    int a[3];

    while (cin >> a[0] >> a[1] >> a[2]){
        sort(a, a + 3);
        if(1LL * a[0] * a[0] + a[1] * a[1] == a[2] * a[2]){
            if(gcd(gcd(a[0], a[1]), a[2]) == 1)
                cout << "tripla pitagorica primitiva\n";
            else
                cout << "tripla pitagorica\n";
        } else{
            cout << "tripla\n";
        }
    }
    

    return 0;
}