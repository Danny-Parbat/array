#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[2][3],c=1,sum=0,e[2][3];
	printf("Enter 1st matrix:\n");
	for(i=0;i<2;i++) 
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter 2nd matrix: \n");
	for(i=0;i<2;i++) 
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &b[i][j]);
		}
	}
	printf("\n sum of mat:\n");
	for(i=0;i<2;i++) 
	{
		for(j=0;j<3;j++)
		{	
			e[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<2;i++) 
	{
		for(j=0;j<3;j++)
		{	
			printf("%d\t",e[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
