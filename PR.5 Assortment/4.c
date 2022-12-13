#include<stdio.h>
main()
{
	int a[100];
	int i,n,max,min;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	printf("\n\n>>>>>=== enter array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n>>>>>=== print array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("maximum is :%d",max);
	
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("\n\nminimum is :%d",min);
}
