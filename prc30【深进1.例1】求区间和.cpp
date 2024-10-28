#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1e5+5; //100005


ll n,m,a[N],s[N];
ll x,y;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	cin >> m;
	for(int i=1;i<=m;i++)
	{
		cin >> x >> y;
		cout << s[y] - s[x-1] << endl;
	}
	return 0;
}
