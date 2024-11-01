#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 5000006; //100005

ll n,p;
ll sscore[N];
ll diff[N];
ll x,y,z;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	ll minn=1e5;
	cin >> n >> p;
	for(int i=1;i<=n;i++)
	{
		cin >> sscore[i];
		diff[i] = sscore[i] - sscore[i-1];
	}
	for(int i=1;i<=p;i++)
	{
		cin >> x >> y >> z;
		diff[x] += z;
		diff[y+1] -= z;
	}
	for(int i=1;i<=n;i++)
	{
		diff[i] += diff[i-1];
		minn = min(minn,diff[i]);
	}
	cout << minn;
	return 0;
}
