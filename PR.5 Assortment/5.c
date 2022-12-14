#include<stdio.h>
main()
{
	int a[100];
	int i,n,f,l;
	
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
	
	if(a[0]>a[1])
	{
		f=a[0];
		l=a[1];
	}
	else
	{
		f=a[1];
		l=a[0];
	}
	
	for(i=2;i<n;i++)
	{
		if(f<a[i])
		{
			l=f;
			f=a[i];
		}
		else if(l<a[i])
		{
			l=a[i];
		}
	}
	
	printf("second largest no is : %d",l);
}
