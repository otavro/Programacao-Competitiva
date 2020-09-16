#include <iostream>

using namespace std;

int findNumber(int n){
    long long ans = 1; 
    int i = 2;
    while(1){
        ans = (ans * 10 + 1) %n; 
        if((ans % n) == 0)
            return i;
        i++;
    }
}

int main(){
    int n;
    while(cin >> n)
        cout << findNumber(n) << "\n";
    return 0;
}