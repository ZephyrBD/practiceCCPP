#include <stdio.h>

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
    int x,sum,num;
	for(int i=lower;i<=upper;i++)
	{
		sum = 0;
		num = i;
		while (num > 0) 
		{
            x = 1;
            for(int j = 0;j<n;j++)
            {
                x *= num%10;
            }
			sum += x;
			num /= 10;
		}
		if (sum == i) 
		{ 
			printf("%d\n", i);
		}
	}
	return 0;
}
