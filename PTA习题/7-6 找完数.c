#include <stdio.h>

int main()
{
	int m,n;
	int cnt,sum;
	cnt = 0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		sum = 0;
		for(int j=1;j<i;j++)
		{
			if(i%j == 0)
			{
				sum += j;
			}
		}
		if(sum==i)
		{
			cnt++;
			printf("%d = 1",sum);
			for(int k=2;k<i;k++)
			{
				if(i%k==0)
				{
					printf(" + %d",k);
				}
			}
			printf("\n");
		}
	}
	if(cnt==0)
	{
		printf("None");
	}
	return 0;
}
