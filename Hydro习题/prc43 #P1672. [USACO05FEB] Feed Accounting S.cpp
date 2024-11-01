#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 2008; //100005

int c,f1,f2,d;
int day[N];
int x,y,maxy = INT_MIN,minx = INT_MAX,awr,date;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> c >> f1 >> f2 >> d;
	for(int i=1;i<=c;i++)
	{
		cin >> x >> y;
		maxy = max(maxy,y);
		minx = min(minx,x);
		day[x] += 1,day[y+1] -= 1;
	}
	for(int i=minx;i<=maxy;i++)
	{
		day[i] += day[i-1];
	}
	awr = f1;
	int cnt = 0;
//	{
//		cout << "here1" << endl;
//		cout << minx << endl << maxy << endl;
//		cout << "here2" << endl;
//		for(int i=1;i<=maxy;i++)
//		{
//			cout << day[i] << endl;
//		}
//	}
	for(date=d;date>=minx;date--,cnt ++)
	{
		awr -= day[date];
		if(awr == f2)
		{
			break;
		}
	}
//	{
//		cout << "here3" << endl;
//		cout << d << endl << cnt << endl;
//	}
	cout << d - cnt;
	return 0;
}
