#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,r,c,sum=0;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	printf("\n\n>>>>>=== enter 2D array value ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n>>>>>=== print 2D array value ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	
	for(j=0;j<r;j++)
	{	
		for(i=0;i<c;i++)
		{
			sum=sum+a[i][j];
		}
		
		printf("\nsum is :%d",sum);
		
		printf("\n");
		sum=0;
	}
}
