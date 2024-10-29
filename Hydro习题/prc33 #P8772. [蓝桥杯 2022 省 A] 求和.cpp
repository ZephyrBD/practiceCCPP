#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 200005; //100005

int n,num[N];
ll sum;
int s[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> num[i];
		s[i] = s[i-1] + num[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum += num[i]*((ll)s[n] - s[i]);
	}
	cout << sum << endl;
	return 0;
}
