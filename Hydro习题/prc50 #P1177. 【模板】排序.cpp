#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100008; //100005

int n;
ll arr[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1);
	for(int i=1;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << arr[n] << endl;
	return 0;
}
