#include<stdio.h>
int main()
{
	int i,avg,a[5],b[5],even=0,odd=0;
	for(i=0;i<5;i++)
	{
		printf("Enter in position [%d]",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			even+=a[i];
		}
		else
		{
			odd+=a[i];
		}
	}
	printf("sum of even:%d\n sum of odd:%d", even,odd);
	return 0;
}
