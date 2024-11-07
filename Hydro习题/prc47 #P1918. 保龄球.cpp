#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1000008; //100005

ll n,q,m;
struct ball
{
	ll location;
	ll text;
};

ball local[N];

int search(ll m)
{
	ll flag = 0;
	ll l=1,r=n;
	ll mid;
	while(l <= r)
	{
		mid = l+(r - l)/2;
		if(local[mid].text == m)
		{
			flag = local[mid].location;
			break;
		}
		else if (local[mid].text > m)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return flag;	
}

bool cmp(ball x,ball y)
{
	return x.text < y.text;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> local[i].text;
		local[i].location = i;
	}
	sort(local+1,local+1+n,cmp);
	cin >> q;
	for(int i=1;i<=q;i++)
	{
		cin >> m;
		if(search(m) == -1)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << search(m) << endl;
		}
	}
	return 0;
}
