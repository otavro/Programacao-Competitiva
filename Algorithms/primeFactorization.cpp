#include <iostream>
#include <cmath>

using namespace std;

void primeFactorization(int n);

int f[100], expo[100], len;

int main(){

    primeFactorization(210);

    for(int i = 1; i <= len; i++){
        cout << f[i] << " " << expo[i] << "\n";
    }
    return 0;
}

/*  Time Complexity: O(sqrt(n))  */
void primeFactorization(int n){
    if (n == 1){
        len++;
        f[len] = 2;
        expo[len] = 0;
        return;
    }
    int d = 2; // divisor
    while(1ll * d * d <= n && n > 1){ // enquanto n > 1 e divisor² <= n 
        int k = 0;
        while(n % d == 0){ //quantas vezes aparece o mesmo expoente
            k++;
            n /= d;
        }
        if(k > 0){
            len++;
            f[len] = d; //salva o numero
            expo[len] = k; // salva o expoente
        }
        d++; //passa para o proximo numero
    }
    if(n > 1){ // se o N for primo
        len++;
        f[len] = n;
        expo[len] = 1;
    }
}