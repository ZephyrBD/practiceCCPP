#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	int tmp = n;
	if(n == 0)
	{
		cout << n << " ";
		return 0;
	}
	while(tmp > 0)
	{
		tmp/=10;
		cnt++;
	}
	int i = cnt-1;
	while(i>=0)
	{
		int awr = n/pow(10,i);
		cout << awr << " ";
		n -= awr * pow(10, i);
		i--;
	}
	return 0;
}
