#include<stdio.h>
int even(int a);
main()
{
	int a;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	if(a % 2==0)
	{
		printf("\n\nno is even.....!!");
	}
	else
	{
		printf("\n\nno is odd.....!!");
	}
	
	even(a);
}
int even(int a)
{
	return a;
}