#include "bits/stdc++.h"
using namespace std;

int search(int rnum[],int num,int len);

int main()
{
	int n;
	cin >> n;
	srand((unsigned int)time(NULL));
	int num = 0;
	int rnum[n] = {0};
	int x = 0;
	int len = 0;
	len = sizeof(rnum)/sizeof(rnum[0]);
	while(x<n)
	{
		num = (rand() % 100) + 1;
		if(search(rnum,num,len))
		{
			rnum[x] = num;
			x++;
			cout << num << " ";
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++)
		{
			if(rnum[j] > rnum[j+1])
			{
				swap(rnum[j],rnum[j+1]);
			}
		}
	}
	cout << endl;
	for(int i=0;i<n;i++)
	{
		cout << rnum[i] << " ";
	}
	system("pause");
	return 0;
}

int search(int rnum[],int num,int len)
{
	int key = 1;
	for(int i=0;i<len;i++){
		if(rnum[i] == num){
			key = 0;
		}
	}
	return key;
}
