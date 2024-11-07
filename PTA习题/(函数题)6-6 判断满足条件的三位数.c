int search(int n)
{
	int cnt = 0;
	for(int i=101;i<=n;i++)
	{
		if((int)sqrt(i)*(int)sqrt(i) == i)
		{
			int num[10] = {0,0,0,0,0,0,0,0,0,0};
			int tmp = i;
			while(tmp > 0)
			{
				int a = tmp%10;
				num[a]++;
				tmp /= 10;
				if(num[a] >= 2)
				{
					cnt++;
					break;
				}
			}
		}
	}
	return cnt;
}
