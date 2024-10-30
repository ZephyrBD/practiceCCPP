#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 130; //100005

int n;
int mapp[N][N];
int s[N][N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> mapp[i][j];
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + mapp[i][j];
		}
	}
	int sum = INT_MIN;
	for(int x1=1;x1<=n;x1++)
	{
		for(int y1=1;y1<=n;y1++)
		{
			for(int x2=x1;x2<=n;x2++)
			{
				for(int y2=y1;y2<=n;y2++)
				{
					sum = max(sum,s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1]);
				}
			}
		}
	}
	cout << sum;
	return 0;
}
