#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;



int main(){
    int exp[5];
    exp[0] = 1; exp[1] = 2; exp[2] = 6; exp[3] = 24; exp[4] = 120;
    int n;
    int ans = 0;
    int aux;
    char resp[5];
    int j;
    while(1){
        cin >> resp;
        if (strcmp(resp, "0") == 0) break;
        ans = 0;
        for(int i = strlen(resp) - 1 , j = 0; i>=0; i--, j++){
            ans += (int) ((resp[j] - '0')  * exp[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}