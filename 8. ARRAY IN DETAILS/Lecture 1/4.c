#include<stdio.h>
main()
{
	int a[100],b[100],c[100];
	int i,n,sum=0;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	printf("\n\n****** array 1 ******\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n****** array 2 ******\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&b[i]);
	}
	
	printf("\n\n****** print value ******\n\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
    for(i=0;i<n;i++)
    {
    	printf("sum is :%d\n",c[i]);
	}
}