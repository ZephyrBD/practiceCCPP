int Count_Digit(const int N,const int D)
{
	int n = N;
	int cnt = 0;
	if(n < 0)
	{
		n *= -1;
	}
	do
	{
		int a = n%10;
		if(a == D)
		{
			cnt++;
		}
		n /= 10;
	}while(n > 0);
	return cnt;
}
