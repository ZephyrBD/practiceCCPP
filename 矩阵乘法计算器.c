#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n,m,k;
	printf("矩阵乘法计算器\nDesigned by ZephyrBD\n");
	printf("请输入第一个矩阵的行数，列数，第二个矩阵的列数（空格间隔）\n");
	scanf("%d %d %d",&n,&m,&k);
	int a[n][m];
	int b[m][k];
	printf("请输入第一个矩阵\n输入每个数字，不用换行\n顺序：从上到下，从左到右\n空格间隔\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("请输入第二个矩阵\n输入每个数字，不用换行\n顺序：从上到下，从左到右\n空格间隔\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			scanf("%d", &b[i][j]);
		}
	}
	int c[n][k];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			c[i][j] = 0;
			for(int l=0;l<m;l++){
				c[i][j] += a[i][l]*b[l][j];
			}
		}
	}
	printf("答案为：\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++)
		{
			if(j != 0){
				printf(" ");
			}
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
	printf("计算结束\n");
	system("pause");
	return 0;
}
