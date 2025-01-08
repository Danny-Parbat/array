#include<stdio.h>
int main()
{
	int i,avg,a[5],b[5];
	for(i=0;i<5;i++)
	{
		printf("Enter in position [%d]",i);
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);}
	return 0;
}
