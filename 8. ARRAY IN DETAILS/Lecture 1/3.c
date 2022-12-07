#include<stdio.h>
main()
{
	int a[100];
	int i,n,sum=0,ave;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n****** print value ******\n\n");
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	ave=sum/n;
	
	printf("averje is :%d",ave);
}
