#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1000008; //100005

ll n,m;
ll red[N],blue[N],yellow[N];
ll start,endd,op;
ll cnt;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=m;i++)
	{
		cin >> start >> endd >> op;
		switch (op) 
		{
		case 1:
			yellow[start] ++,yellow[endd+1]--;
			break;
		case 2:
			blue[start] ++,blue[endd+1]--;
			break;
		case 3:
			red[start] ++,red[endd+1]--;
			break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		yellow[i] += yellow[i-1];
		blue[i] += blue[i-1];
		red[i] += red[i-1];
		if(yellow[i] != 0 && blue[i] != 0 && red[i] == 0)
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
