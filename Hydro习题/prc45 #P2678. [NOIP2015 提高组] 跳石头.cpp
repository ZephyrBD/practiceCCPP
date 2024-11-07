#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1e6 + 7; //100005 

int l,n,m;
int rock[N];

bool 检查(int mid)
{
	int pass = 0;
	int cnt = 0;
	int c;
	for(int i=1;i<=n+1;i++)
	{
		c = rock[i] - pass;
		if(c < mid)
		{
			cnt ++;
		}
		else
		{
			pass = rock[i];
		}
	}
	return cnt > m;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> l >> n >> m;
	rock[n+1] = l;
	for(int i=1;i<=n;i++)
	{
		cin >> rock[i];
	}
	int leftt = 0;
	int rightt = l;
	int mid;
	int ans;
	//向上取整时(左右边界+1)，边界移动时rightt = mid-1;
	//相反，边界移动时leftt = mid + 1；
	while(leftt < rightt)
	{
		mid = (leftt+rightt + 1)/2;
		if(检查(mid))
		{
			rightt = mid-1;
		}
		else
		{
			ans = mid;
			leftt = mid;
		}
	}
	cout << ans << endl;
	return 0;
}
