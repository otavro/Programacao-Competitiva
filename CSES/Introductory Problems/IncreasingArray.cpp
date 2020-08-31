#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned long long ull;

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ull pre, steps = 0ull, in, n;

    cin >> n >> pre;

    while(--n > 0){
        cin >> in;
        if (pre > in)
            steps += pre - in;
        else 
            pre = in;
    }
 
    cout << steps << "\n";


    return 0;
}