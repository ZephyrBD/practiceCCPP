int reverse(int num)
{
	//printf("%d\n",num);
	int tmp = num;
	int cnt = 0;
	if(tmp < 0) num = -num;
	while(num > 0)
	{
		num /= 10;
		cnt++;
	}
	//printf("%d\n",cnt);
	num = tmp;
	if(tmp < 0) num = -num;
	int sum = 0;
	for(int i=cnt-1;num>0;i--)
	{
		int x = 1;
		for(int j=i;j>0;j--)
		{
			x *= 10;
		}
		//printf("%d\n",x);
		sum += num%10 * x;
		num /= 10;
	}
	if(tmp < 0) return -sum;
		else return sum;
}
