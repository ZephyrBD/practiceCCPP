#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100009; //100005

int n,k;
int a[N],b[N];
bool check(int x)
{
	int cnt = 0;
	for(int i=1;i<=n;i++)
		cnt += (a[i]/x) * (b[i]/x);
	if(cnt >= k) return true;
	else return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> k;
	int maxx = INT_MIN;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i];
		maxx = max(a[i],max(maxx,b[i]));
	}
	int l = 1,r = maxx;
	while(l <= r)
	{
		int mid = l + (r-l)/2;
		if(check(mid)) l = mid + 1;
		else r = mid - 1;
	}
	cout << r;
	return 0;
}
