#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1e5+5; //100005

ll n;
ll tmp1;
int isPrime;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(ll i=2;i<n;i++)
	{
		isPrime = 1;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j == 0)
			{
				isPrime=0;
			}
		}
		if(isPrime == 1)
		{
			tmp1 = n-i;
			for(int j=2;j*j<=tmp1;j++)
			{
				if(tmp1%j == 0)
				{
					isPrime=0;
				}
			}
			if(isPrime==1)
			{
				cout << n << " = " << i << " + " << tmp1;
				break;
			}
		}
	}
	return 0;
}
