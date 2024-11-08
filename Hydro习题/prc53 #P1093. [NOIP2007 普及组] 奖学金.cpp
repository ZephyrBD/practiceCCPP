#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 310; //100005

struct score
{
	int chinese;
	int math;
	int english;
	int all;
	int stunum;
};
int n;
score a[N];
bool cmp(score x,score y)
{
	if(x.all < y.all)
		return true;
	else if(x.all == y.all)
	{
		if(x.chinese < y.chinese)
			return true;
		else if(x.chinese == y.chinese)
		{
			if(x.stunum > y.stunum)
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

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i].chinese >> a[i].math >> a[i].english;
		a[i].all = a[i].chinese + a[i].math + a[i].english;
		a[i].stunum = i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=n;i>n-5;i--)
	{
		cout << a[i].stunum << " " << a[i].all << endl;
	}
	return 0;
}
