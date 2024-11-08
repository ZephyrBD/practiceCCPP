int chifang(int num,int cnt)
{
	int tmp = 1;
	for(int i=1;i<=cnt;i++)
	{
		tmp *= num;
	}
	return tmp;
}

int narcissistic(int num)
{
	int flag = 0;
	int cnt = 0;
	int tmp = num;
	while(num > 0)
	{
		num /= 10;
		cnt++;
	}
	num = tmp;
	int sum = 0;
	while(num > 0)
	{
		sum += chifang(num%10,cnt);
		num /= 10;
	}
	if(sum == tmp)
	{
		flag = 1;
	}
	return flag;
}

void PrintN(int m, int n)
{
	for(int i=m+1;i<=n-1;i++)
	{
		if(narcissistic(i))
		{
			printf("%d\n",i);
		}
	}
}

