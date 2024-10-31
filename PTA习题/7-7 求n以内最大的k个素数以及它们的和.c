#include <stdio.h>

int main()
{
	int n,k;
	int isPrime;
	int sum = 0;
	int cnt = 0;
	scanf("%d %d",&n,&k);
	int list[k];
	for(int i=n;i>1;i--)
	{
		isPrime = 1;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j == 0)
			{
				isPrime=0;
			}
		}
		if(isPrime == 1)
		{
			sum += i;
            list[cnt] = i;
			cnt ++;
		}
		if(cnt == k)
		{
			break;
		}
	}
	for(int i=0;i<cnt;i++)
	{
		if(i == cnt-1)
		{
			printf("%d=",list[i]);
		}
		else
		{
			printf("%d+",list[i]);
		}
	}
	printf("%d",sum);
	return 0;
}
