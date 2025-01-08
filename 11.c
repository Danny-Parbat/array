#include<stdio.h>
int main()
{
	int i,j,a[4][4],b=0,c=1,sum=0;
	for(i=0;i<4;i++) 
	{
		for(j=0;j<4;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<4;i++) 
	{
		for(j=0;j<4;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++) 
	{
			sum+=a[b][c];
			b++;
	}
	printf("sum of 2nd column: %d",sum);
	return 0;
}
