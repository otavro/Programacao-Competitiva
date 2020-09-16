#include <iostream>

using namespace std; 

const int Nmax = 100005;
int fr[Nmax];

void findNumbers(int n);

int main(){

    findNumbers(547);


    return 0;
}

void findNumbers(int n){
    int curRem = 0;
    for(int i = 1; i <=n ; i++) {
        curRem = (curRem * 10 + 1) % n;
        if(curRem == 0){
            for(int j = 1; j <=i; j++){
                cout << i;
                return;
            }
        }
        if(fr[curRem] != 0){
            for (int j = 1; j <= i - fr[curRem]; j++)
                cout << 1;
            for (int j = 1; j <= fr[curRem]; j++)
                cout << 0;
            return;
        }
        fr[curRem] = i;
    }
}