#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int dife(int n, int x, vector <int> &a)
{
    int res = 0, dif;
    for(int i = 0; i<n; i++)
    {
        dif = x - a[i];
        a[i] += dif;
        a[i+1] += dif;
        res += abs(dif);
    }
    return res;
}

int main()
{
    vector <int> a;
    int dif, n, j, x, res = 0;
    cin >> n >> x;

    for(int i = 0; i<n; i++)
    {
        cin >> j;
        a.push_back(j);
    }

    cout << dife(n, x, a) << "\n";

    return 0;
}