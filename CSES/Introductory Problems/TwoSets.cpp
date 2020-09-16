#include <iostream>
#include <stack>

using namespace std;

void printa(stack <int> resp);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    long long b;

    stack <int> respA;
    stack <int> respB;


    cin >> a;

    b = (long long) ((1 + a) * a) / 2;


    if(b & 1)
        cout << "NO";
    else {
        cout << "YES\n";

        for(int i = 1; a >= i;){
            respA.push(a--);
            respB.push(a--);
            respB.push(a--);
            if(a==0)
                break;
            respA.push(a--);
        }
        if(respA.size() > respB.size()){
            printa(respA);
            printa(respB);
        } else if (respB.size() > respA.size()){
            printa(respB);
            printa(respA);
        } else {
        printa(respA);
        printa(respB);
        }
    }

    return 0;

}

void printa(stack <int> resp){
    cout << resp.size() << "\n";
        for(int i = 0, j = resp.size()-1; i < j; i++){
            cout << resp.top() << " ";
            resp.pop();
        }
        cout << resp.top() << "\n";
}