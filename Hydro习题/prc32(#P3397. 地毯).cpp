#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 1002; //100005

//二维差分
int n,m;
int s[N][N];
int x1,yy1,x2,yy2;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	//进行m次操作，每次修改一个矩阵的值使得其+c或者-c;
	while(m--)
	{
		cin >> x1 >> yy1 >> x2 >> yy2;
		//进行修改操作
		s[x1][yy1] +=1;
		//减去不想修改部分的累加
		s[x2+1][yy1] -=1;
		s[x1][yy2+1] -=1;
		//加回重复修改部分
		s[x2+1][yy2+1] +=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			//差分矩阵做前缀和能得到原来数列的每一项
			s[i][j] += s[i][j-1] + s[i-1][j] - s[i-1][j-1];
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
