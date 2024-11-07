#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const int N = 5000009; //100005

ll n,k;
ll num[N];

void quick_sort(ll num[],ll l,ll r)
{
	/*
	这是快速排序算法的递归终止条件。当子数组的左边界大于或等于右边界时，
	说明子数组中最多只有一个元素，此时不需要进行排序，直接返回
	*/
	if(l >= r)
	{
		return;
	}
	
	ll i = l - 1,j = r + 1,mid = num[(l + r) >> 1];// 选择基准元素
	/*
	关于mid:这种选择基准元素的方式是一种常见的优化，
			可以在一定程度上避免最坏情况的发生。
	*/
	while(i < j)
	{
		//从左向右找到第一个大于等于 x 的元素
		do
		{
			i++;
		}while(num[i] < mid);
		//从右向左找到第一个小于等于 x 的元素
		do
		{
			j--;
		}while(num[j] > mid);
		//交换元素
		if(i < j)
		{
			swap(num[i],num[j]);
		}
	}
	/*
	在双指针i和j移动并交换元素的过程中，j指针从右向左移动，寻找小于等于基
	准值x的元素。当i < j的条件成立且完成一次交换后，j所指向的位置及其左边
	的元素都满足小于等于基准值的条件。
	*/
	quick_sort(num,l,j);
	quick_sort(num,j+1,r);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> num[i];
	}
	//快速排序，分治思想
	quick_sort(num,1,n);
	//sort(num + 1,num + 1 + n);
	//+1是为了跳过num[0]
	cout << num[k+1];
	return 0;
}
