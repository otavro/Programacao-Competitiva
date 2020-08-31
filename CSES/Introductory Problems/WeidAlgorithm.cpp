#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a;

    cin >> a;
    cout << a << " ";
    while(a!=1){ 
        if (a % 2 == 0)
            a = a / 2 ;
        else
            a = (a * 3) + 1;
        if (a==1){
            cout << "1\n";
            break;
        }
        cout << a << " ";
    } 
    
    
    return 0;
}