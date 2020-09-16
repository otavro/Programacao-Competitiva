#include <iostream>

using namespace  std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const int eye = 40000000;
    int ans = 0, a, n, t;

    cin >> t >> n;
    for(int i = 0 ; i < n; i++){
        cin >> a;
        if(1LL * a * t >= eye)
            ans++;
    }
    cout << ans << "\n";

    return 0;

}