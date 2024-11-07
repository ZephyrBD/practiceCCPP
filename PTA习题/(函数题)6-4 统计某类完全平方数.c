int IsTheNumber(const int N)
{
	int flag = 0;
	if((int)sqrt(N)*(int)sqrt(N) == N)
	{
		int n = N;
		int cnt[10] = {0};
		while(n > 0)
		{
			int a = n%10;
			cnt[a]++;
			n /= 10;
			if(cnt[a] >= 2)
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
