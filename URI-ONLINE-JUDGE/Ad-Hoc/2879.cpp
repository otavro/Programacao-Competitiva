#include <iostream>

using namespace  std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0, n, a;

    cin >> n;

    for(int i = 0; i< n; i++){
        cin >> a;
        if (a != 1)
            ans++;
    }

    cout << ans << "\n";

    return 0;
}