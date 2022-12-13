#include<stdio.h>
main()
{
	int a[100];
	int i,n,sum=0;
	
	printf("enter the size of arr:");
	scanf("%d",&n);
	
	printf("\n\n>>>>>=== enter array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n>>>>>=== print array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("\n\n>>>>>=== sum of array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("sum is :%d",sum);	
}