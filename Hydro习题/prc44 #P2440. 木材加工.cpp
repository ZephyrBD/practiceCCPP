#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100007; //100005


ll n,k;
ll a[N];
bool check(ll mid);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	ll leftt = 0,rightt=100000001;
	ll mid;
	while(leftt+1<rightt)
	{
		mid = (leftt + rightt) / 2;
		if(check(mid))
			leftt = mid;
		else
			rightt = mid;
	}
	cout << mid << endl;
	return 0;
}
bool check(ll mid)
{
	ll ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans += a[i]/mid;
	}
	return ans >= k;
}
