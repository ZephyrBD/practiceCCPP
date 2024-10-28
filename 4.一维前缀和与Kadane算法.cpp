#include "bits/stdc++.h"
#define ll long long
using namespace std;
//#P1115. 最大子段和
//难点：TLE
//易忘点：RTE
//主要看点：一维前缀和，动态规划：Kadane算法（贪心）
ll a[2000001];// 1 ≤ n ≤ 2×10^5 ||||| −10^4 ≤ ai ≤ 10^4
//ll s[2000001];
ll n = 0;
//经典Kadane算法变量名称
ll maxEndingHere[2000001],maxSoFar;
ll max(ll a,ll b)
{
	return a > b ? a:b;
}

int main()
{
	//maxSoFar：使得maxSoFar的值无限小
	maxSoFar = LONG_LONG_MIN;
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		//Kadane算法
		//maxEndingHere：a[n]项和自我选择出的maxEndingHere[i-1] + a[i]找到最大值
		//如果a[n]项一直无法取得maxEndingHere的位置，那么相当于在不停做一维前缀和
		//这时候拿出来看就是maxEndingHere[i] = maxEndingHere[i-1] + a[i]； 
		//			类比一维前缀和通式：s[i] = s[i-1] + a[i];
		//如果a[n]项取得了maxEndingHere的位置的位置，那么打断之前的和，从该项开始相加
		maxEndingHere[i] = max(a[i],maxEndingHere[i-1] + a[i]);
		//maxSoFar：记录目前为止最大的值
		maxSoFar = max(maxSoFar,maxEndingHere[i]);
	}
	cout << maxSoFar << endl;
	return 0;
}
