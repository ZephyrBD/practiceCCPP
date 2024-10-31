#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for(int i=1;i<=999;i++)
	{
		int sum = 0;
		int num = i;
		while (num > 0) 
		{
			sum += num % 10; 
			num /= 10;
		}
		if (sum == n) 
		{
			printf("%8d", i);
			cnt ++;
			if(cnt%6 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
