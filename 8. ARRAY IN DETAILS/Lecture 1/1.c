#include<stdio.h>
main()
{
	int a[100];
	int i,n;
	
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
		printf("%d\n",a[i]);
	}
}