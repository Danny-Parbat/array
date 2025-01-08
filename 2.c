#include<stdio.h>
int main()
{
	int i;
	float avg,a[10],sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter in position [%d]",i);
		scanf("%f", &a[i]);
		sum+= a[i];
	}
	avg= sum/10;
	printf("%f", avg);
	return 0;
}
