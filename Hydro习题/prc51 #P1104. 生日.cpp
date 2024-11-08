#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 150; //100005

struct person
{
	string s;
	int y;
	int m;
	int d;
	int num;
};

person a[150];
int n;

bool cmp(person x,person y)
{
	if(x.y < y.y)//比年
		return true;
	else if(x.y == y.y)
	{
		if(x.m < y.m)//比月
			return true;
		else if(x.m == y.m)
		{
			if(x.d < y.d)//比日
				return true;
			else if(x.d == y.d)
			{
				if(x.num > y.num)//比编号
					return true;
				else
					return false;
			}	
			else 
				return false;
		}
		else 
			return false;
	}
	else 
		return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d;
		a[i].num = i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		cout << a[i].s << endl;
	}
	return 0;
}
