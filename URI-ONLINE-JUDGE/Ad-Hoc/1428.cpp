#include <iostream>
#include <cmath>

using namespace  std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, ans;
    double a, b;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        ans = ceil(((a-2)/3));
        ans *= ceil(((b-2)/3));
        cout << ans << "\n";
    }
    return 0;

}