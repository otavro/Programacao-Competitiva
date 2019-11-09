#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long int max_Consu(vector<pair<int, int>> &X)
{
    unsigned int ans = 1;
    unsigned int tam_X = X.size();
    for(int i = 1, j = 0; i< tam_X;i++){
        if (X[i].second >= X[j].first){
            ans ++;
            j = i;
        }
    }
    return ans;
}

int main(){
    int N, a, b;
    vector < pair <int, int> > X;

    cin >> N;
    for(int i = 0; i <N; i++){
        cin >> a >> b;
        X.push_back(make_pair(b, a));
    }

    sort(X.begin(), X.end());
    
    cout << max_Consu(X) << "\n";


    return 0;
}