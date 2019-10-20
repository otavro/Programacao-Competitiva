#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    string O = "Otavio";
    string B = "Bruno";
    string I = "Ian";

    float a, b ,c;

    cin >> a >> b >> c;

    if (a<b && a<c)
        cout << O << endl;
    else if (b<c && b<a)
        cout << B << endl;
    else if (c < a && c < b)
        cout << I << endl;
    else
        cout << "Empate" << endl;


    return 0;
}