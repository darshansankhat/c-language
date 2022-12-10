#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,r,c,sum=0,length,average;
	
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
	
	printf("\n\n>>>>>=== sum of 2D array value ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
		
		printf("\n");
	}
	
	length=r*c;
	
	printf("sum is :%d",sum);
	
	average=sum/length;
	
	printf("\n\naverage is:%d",average);
}