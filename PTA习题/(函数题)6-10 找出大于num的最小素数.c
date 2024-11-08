int isPrime(int p)
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

int Prime_number(int N)
{
	int i=N+1;
	while(!isPrime(i)) i++;
	return i;
}
