#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("Enter in position [%d]",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
