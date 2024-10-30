#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1e5+5; //100005

int n;
ll a[N];
ll diff[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		diff[i] = a[i] - a[i-1];
	}
	ll sum =0;
	for(int i=0;i<=n;i++)
	{
		if(diff[i] > 0)
		{
			sum += diff[i];
		}
	}
	cout << sum;
	return 0;
}
