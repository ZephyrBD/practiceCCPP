#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 2000010; //100005

ll vote[N];
ll temp[N];
ll n,m;
void merge(ll l,ll mid,ll r)
{
	ll i = l,j = mid + 1,k = l;
	while(i<=mid&&j<=r)
	{
		if(vote[i] < vote[j])
			temp[k++] = vote[i++];
		else
			temp[k++] = vote[j++];
	}
	while(i<=mid)
		temp[k++] = vote[i++];
	while(j<=r)
		temp[k++] = vote[j++];
	for(ll i=l;i<=r;i++)
		vote[i] = temp[i];
}

void mergesort(ll l,ll r)
{
	if(l>=r) return;
	ll mid = l + (r-l)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	merge(l,mid,r);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(ll i=1;i<=m;i++)
	{
		cin >> vote[i];
	}
	mergesort(1,m);
	for(ll i=1;i<m;i++)
	{
		cout << vote[i] << " ";
	}
	cout << vote[m];
	return 0;
}
