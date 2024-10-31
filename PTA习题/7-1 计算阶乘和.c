#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int tmp = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            tmp *= j;
        }
        sum += tmp;
        tmp = 1;
    }
    printf("%d\n",sum);
    return 0;
}
