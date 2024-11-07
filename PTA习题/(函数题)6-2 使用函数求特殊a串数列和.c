int fn(int a,int n)
{
	int num = 0;
	for(int i=0;i<n;i++)
	{
		int pow = 1;
		for(int j=1;j<=i;j++)
		{
			pow *= 10;
		}
		num += a*pow;
	}
	return num;
}

int SumA(int a,int n)
{
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum += fn(a,i);
	}
	return sum;
}
