int prime(int p)
{
	int isPrime = 1;
	if(p <= 1) return 0;
	for(int i=2;i*i<=p;i++)
	{
		if(p%i==0)
		{
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int PrimeSum(int m,int n)
{
	int sum = 0;
	for(int i=m;i<=n;i++)
		if(prime(i)) sum += i;
	return sum;
}
