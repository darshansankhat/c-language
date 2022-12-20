#include<stdio.h>

int cub(int a);

main()
{
	int a,b;
	
	printf("enter the no :");
	scanf("%d",&a);
	
	b=cub(a);
	
	printf("cub is =%d",b);
}

int cub(int a)
{
	int b = a*a*a;
	
	return b;
}