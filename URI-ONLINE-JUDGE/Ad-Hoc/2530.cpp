#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
typedef long long ll;
 
 
int gcd(int a, int b) 
    { 
    return (b == 0 ? a : gcd(b, a % b)); 
    }
int main(int argc, char** argv) {
	int n,m;
	int h;
	while(cin>>n>>m)
	{
		vector<int> a(n);
		vector<int> b(m);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d", &b[i]);
		}
		int i=0,j=0;
		while(i<m&&j<n)
		{
			if(b[i]==a[j])
			{
				i++;
			}
			j++;
		}
		if(i==m)
            printf("simn");
		else 
            printf("naon");
	}
	return 0;
}