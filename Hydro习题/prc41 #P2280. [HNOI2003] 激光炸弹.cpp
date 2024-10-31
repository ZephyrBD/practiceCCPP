#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 5008; //100005

int n,m,x,y,z,maxx;
int maxxx,maxy;
int mapp[N][N];
int s[N][N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> x >> y >> z;
		mapp[x+1][y+1] += z;
		maxxx = max(maxxx, x+1);
		maxy = max(maxy, y+1);
	}
	maxxx = max(maxxx,m);
	maxy = max(maxy,m);
	for(int i=1;i<=maxxx;i++)
	{
		for(int j=0;j<=maxy;j++)
		{
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + mapp[i][j];
		}
	}
	for(int i=m;i<=maxxx;i++)
	{
		for(int j=m;j<=maxy;j++)
		{
			maxx = max(maxx,s[i][j] - s[i][j-m] - s[i-m][j] + s[i-m][j-m]);
		}
	}
	cout << maxx;
	return 0;
}
