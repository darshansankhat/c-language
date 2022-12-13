#include<stdio.h>
main()
{
	int a[100];
	int i,n;
	
	printf("enter the size of arr:");
	scanf("%d",&n);
	
	printf("\n\n>>>>>=== enter array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("value is:");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n>>>>>=== print negative array value ===<<<<<\n\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			printf("%d\n",a[i]);
		}
	}	
}