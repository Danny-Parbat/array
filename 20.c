#include<stdio.h>
int main()
{
	int i,j,a[2][2][2],k,sum=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("Enter in position [%d][%d]",i,j,k);
				scanf("%d", &a[i][j][k]);
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				sum+=a[i][j][k];
			}
		
		}	
	}
	printf("sum is:%d",sum);
	
	return 0;
}
