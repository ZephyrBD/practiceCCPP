#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1000009; //100005

ll num[N];
ll n,m;

int search(ll snum)
{
	int where = -1;
	int l = 1,r = n;
	while(l <= r)
	{
		int mid = l + (r-l)/2;
		if(num[mid] == snum)
		{
			where = mid;
			r = mid - 1;
			//break;
		}
		else if(num[mid] > snum)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return where;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> num[i];
	}
	for(int i=1;i<=m;i++)
	{
		ll snum;
		cin >> snum;
		cout << search(snum) << " ";
	}
	return 0;
}
