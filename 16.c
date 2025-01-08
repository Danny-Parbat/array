#include<stdio.h>
int main()
{
	int i,j,a[3][3],b=0,c=2,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)//converting to upper triangular
	{
		for(j=0;j<3;j++)
		{
		
			if(j>=i)
			sum+=a[i][j];
		}
	}
	printf("sum of upper triangular mat: %d",sum);
	return 0;
}
