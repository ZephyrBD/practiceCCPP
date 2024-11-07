/*
本题要求实现一个函数：从键盘读入正整数K，
计算并输出0-K以内最大的10个能被13或17整除的自然数之和，
如果不足10个，则计算所有能被13或17整除的自然数之和。
*/
int Count(int k)
{
	int sum = 0;
	int cnt = 0;
	for(int i=k;i>=0&&cnt<10;i--)
	{
		if(i%13 == 0 || i%17 == 0)
		{
			sum += i;
			//printf("%d\n",i);
			cnt++;
		}
	}
	return sum;
}
