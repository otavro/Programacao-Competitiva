#include <iostream>

using namespace std;

int main()
{

    int gov =0;
    int uni = 0;
    char a;
    int x, y, n;

    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> a >> x;
        if (a=='G')
            gov +=x;
        else
            uni += x;
    }

    if(uni>= gov)
        cout << "A greve vai parar." << endl;
    else
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;

    return 0;
}