#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V ;
    vector<int> A ;

    int n, a;
    short int i, j;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        V.push_back(a);
    }
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >>a;
        A.push_back(a);
    }
    for(i=0; i<(int)V.size(); i++)
    {
        for(j =0; j<(int)A.size(); j++)
        {
            if (A[j] == V[i])
                V.erase(V.begin()+i);
        }
    }
    for(i= 0; i<(int)V.size(); i++)
    {
        if ( i == ((int)V.size())-1)
            cout << V[i] << endl;
        else cout << V[i] << ' '; 
    }
    cout << endl;
    return 0;
}