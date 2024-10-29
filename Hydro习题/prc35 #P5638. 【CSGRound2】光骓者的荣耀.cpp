#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1000008; //100005

ll road[N];
ll sroad[N];
ll n,k;
ll time1;
int main()
{
	ll max1 = LLONG_MIN;
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n-1;i++)
	{
		cin >> road[i];
		sroad[i] = sroad[i-1] + road[i];
	}
	for(int i=1;i<=n-k;i++)
	{
		max1 = max(max1,sroad[i+k-1]-sroad[i-1]);
	}
	cout << sroad[n-1] - max1 << endl;
	return 0;
}
