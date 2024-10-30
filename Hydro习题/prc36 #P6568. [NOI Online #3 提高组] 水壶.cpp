#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1000008; //100005

int n,k;
int a[N];
int s[N];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	int maxx = INT_MIN;
	for(int i=1;i<=n-k;i++)
	{
		maxx = max(maxx,s[i+k] - s[i-1]);
	}
	cout << maxx << endl;
	return 0;
}
