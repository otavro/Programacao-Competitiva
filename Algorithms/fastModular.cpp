#include <iostream>

using namespace std;



int fastExpoRecursive(int a, long long n, int MOD);
int fastExpoInterative(int a, long long n, int MOD);

int main(){

    cout << fastExpoInterative(7, 10, 1000000007) << "\n";

    return 0;
}
/*Time complexity:  O(log(n))  Recursive */
int fastExpoRecursive(int a, long long n, int MOD){
    if (n == 0)
        return  1;
    // (a ^n) % MOD
    if(n % 2 == 0)
        // a ^ n = (a ^ 2)  ^ (n /2)
        return fastExpoRecursive((1LL * a * a) % MOD, n / 2, MOD);
    // a ^ n = a * a ^ (n - 1)
    return (1LL * a * fastExpoRecursive(a, n-1, MOD)) % MOD;
}

int fastExpoInterative(int a, long long n, int MOD){
    // --> (a^n) % MOD
    int ans = 1;
    /// a = 2, n = 13 --> 2^13, ans = 1
    /// 1. n is odd : (2^12), a = 2, n = 12, ans = 2;
    /// 2. n is even  : ((2^2)^6), a = 4 , n = 6, ans = 2;
    /// 3. n is even  : ((4^2)^3), a = 16, n = 3, ans = 2;
    /// 4. n is odd :      16 ^ 2, a = 16, n = 2, ans = 32;
    /// 5. n is even : 256 ^1, a = 256, n = 1, ans = 32;
    /// 6. n is odd : 256 * 256^0, a = 256, ans = 35 * 256 = 8192

    while(n >= 1){
        if(n % 2 == 0){
            a = (1LL * a * a) % MOD; 
            n /= 2;
        }
        else{
            ans = (1LL * ans * a) % MOD;
            n--; 
        }
    }
    return ans;
}