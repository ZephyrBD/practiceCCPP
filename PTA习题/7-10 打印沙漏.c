#include <stdio.h>

int main()
{
	char c;
	int num;
	int s = 0;
	int cnt = 0;
	scanf("%d %c", &num, &c);
	for(int i=1;(s+i)*2-1<=num;i+=2)
	{   
		s += i;
		cnt ++;
	}
	s *= 2;
	s--;
	num -= s;
	int tmp = cnt;
	for(int i=1;cnt>0;i++)
	{
		for(int j=0;j<i-1;j++)
		{	
			printf(" ");
		}
		for(int j=1;j<=2*cnt-1;j++)
		{
			printf("%c",c);
		}
		printf("\n");
		cnt--;
	}
	cnt = tmp;
	for(int i=2;i<=cnt;i++)
	{
		for(int j=0;j<cnt-i;j++)
		{	
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	printf("%d",num);
	return 0;
}
