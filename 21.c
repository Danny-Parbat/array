#include<stdio.h>
int main()
{
	int i,j,a[2][2][2],k,sum=0,p=0,n=0,zero=0;
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
				if(a[i][j][k]>0)
				p++;
				else if(a[i][j][k]<0)
				n++;
				else
				zero++;
			}
		}	
	}
	printf("No of: +ve is: %d\n-ve is: %d\n zero is: %d",p,n,zero);
	return 0;
}
