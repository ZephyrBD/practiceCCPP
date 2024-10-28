#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1010;
//const int N = 1e5+5;//100005
//ll N = 20000;

ll n,m,c;
ll map1[N][N];
ll s[N][N];
//ll maxSofar;
ll x,y;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m >> c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >> map1[i][j];
			s[i][j] = s[i][j-1] + s[i-1][j] - s[i-1][j-1] + map1[i][j];
		}
	}
	ll maxpo = LONG_LONG_MIN,sum;
	//领地选择
	for(int i=1;i<=n-c+1;i++)
	{
		for(int j=1;j<=n-c+1;j++)
		{
			sum = s[i+c-1][j+c-1] - s[i+c-1][j-1] - s[i-1][j+c-1] + s[i-1][j-1];
			if(sum>maxpo)
			{
				x=i,y=j;
				maxpo=sum;
			}
		}	
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}
