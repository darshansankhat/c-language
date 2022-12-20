#include<stdio.h>
int div(int a);

main()
{
	int no;
	
	printf("enter the number:");
	scanf("%d",&no);
	
	div(no);	
}

int div(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("%d is divisible by 3 & 5....!!!",a);
	}
	else if(a%3==0)
	{
		printf("%d is divisible by 3....!!!",a);
	}
	else if(a%5==0)
	{
		printf("%d is divisible by 5....!!!",a);
	}
	else
	{
		printf("%d is not divisible by 3 & 5....!!!",a);
	}
	
	return a;
}