#include<stdio.h>
#include<math.h>

int main()
{
	int b,c=0,isPrime=0,n,i;
	scanf("%d",&n);
	if(n==1)
	{
		printf("None");
	}
	for(b=2;b<=n;b++)
	{ 
		isPrime=0;
		c=pow(2,b)-1;
		for(i=2;i<c;i++)
		{
			if(c%i==0)
			{
				isPrime=1;
				break;
			}
		}
		if(isPrime==0)
		{
			printf("%d\n",c);
		}
	}
	return 0;
}
