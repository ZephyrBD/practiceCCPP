int is(int number)
{
	int flag = 0;
	int sum = 0;
	while(number > 0)
	{
		int a = number%10;
		number /= 10;
		sum += a;
	}
	if(sum == 5)
	{
		flag = 1;
	}
	return flag;
}

void count_sum(int a,int b)
{
	int cnt = 0;
	int sum = 0;
	for(int i=a;i<=b;i++)
	{
		if(is(i))
		{
			sum += i;
			cnt++;
		}
	}
	printf("count = %d, sum = %d",cnt,sum);
}
