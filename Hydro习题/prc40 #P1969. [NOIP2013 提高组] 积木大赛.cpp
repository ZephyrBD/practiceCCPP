#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100008; //100005


int n;
int cnt;
int d[N];
int high[N];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cin >> high[i];
		d[i] = high[i] - high[i-1];
	}
	for(int i=1;i<=n;i++)
	{
		if(d[i] > 0)
		{
			cnt+=d[i];
		}
	}
	cout << cnt;
	return 0;
}
