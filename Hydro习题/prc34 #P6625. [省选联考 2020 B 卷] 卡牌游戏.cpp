#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100008; //100005

int n;
int pai[N];
int s[N];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	ll score = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> pai[i];
		s[i] = s[i-1]+pai[i];
	}
	for(int i=2;i<=n;i++)
	{
		score += max(0,s[i]);
	}
	cout << score;
	return 0;
}
