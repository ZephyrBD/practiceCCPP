#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	struct person{
		char name[9];
		double t;
		int tbool;
	};
	person pat[n];
	for(int i = 0;i<n;i++)
	{
		cin >> pat[i].name >> pat[i].t >> pat[i].tbool;
	}
	int cnt = 0;
	for(int i = 0;i<n;i++)
	{
		if(pat[i].t >= 37.5 && pat[i].tbool == 1)
		{
			cout << pat[i].name << endl;
			cnt ++;
		}
	}
	cout << cnt << endl;
	return 0;
}
