#include <iostream>
#include<vector>

#include<algorithm>
#include<math.h>

#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
typedef long long ll;
 
 
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n,m;
	int h;
	while(cin>>n>>m)
	{
		vector<int> a(n);
		vector<int> b(m);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
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
		if(i==m)printf("simn");
		else printf("naon");
	}
	return 0;
}