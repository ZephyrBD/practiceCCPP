#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 100000; //100005


double a,b,c,d;

double f(double x)
{
	return a*x*x*x + b*x*x + c*x + d;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> a >> b >> c >> d;
	double l,r,yl,yr;
	int cnt = 0;
	for(double i=-100;i<=100&&cnt<3;i++)
	{
		yl = f(i);
		yr = f(i+1);
		if(yl == 0)
		{
			cnt++;
			cout << fixed << setprecision(2) << i << " ";
		}
		else
		{
			if(yl*yr < 0)
			{
				l = i;
				r = i + 1;
				while(r - l >= 0.001)  
				{  
					double mid = l + (r-l)/2;  
					if(f(mid) * yl > 0)  
					{  
						l = mid;

					}  
					else  
					{  
						r = mid;  
					}  
				}
				cnt++;
				cout << fixed << setprecision(2) << l << " ";
			}
		}
	}
	return 0;
}
