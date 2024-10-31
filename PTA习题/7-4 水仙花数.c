#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int lower =1;
	for(int i=0;i<n-1;i++)
	{
		lower *= 10;
	}
	int upper = 1;
	for(int i=0;i<n;i++)
	{
		upper *= 10;
	}
	for(int i=lower;i<=upper;i++)
	{
		int sum = 0;
		int num = i;
		while (num > 0) 
		{
			sum += pow(num % 10,n);
			num /= 10;
		}
		if (sum == i) 
		{ 
			printf("%d\n", i);
		}
	}
	return 0;
}
