#include<stdio.h>
main()
{
	int a[100][100],b[100][100],d[100][100];
	int i,j,r,c,sum=0;
	
	printf("enter the row:");
	scanf("%d",&r);
	printf("enter the column:");
	scanf("%d",&c);
	
	printf("\n\n>>>>>=== enter array value ===<<<<<\n\n");
	
	printf("\n\n>>>>>=== 1 ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=:",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n>>>>>=== 2 ===<<<<<\n\n");
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=:",i,j);
		    scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n>>>>>=== print array value ===<<<<<\n\n");
	
	printf("\n\n>>>>>=== 1 ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n\n>>>>>=== 2 ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n\n>>>>>=== sum of array value ===<<<<<\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		
		printf("\n");
	}	
}