#include<stdio.h>
int interest(float a);

main()
{
    float a;
    
    interest(a);
}
int interest(float a)
{
	int p,r,n; 
	
	printf("\nenter the monye :");
	scanf("%d",&p);
	printf("\nenter the interest rat :");
	scanf("%d",&r);
	printf("\nenter the time :");
	scanf("%d",&n);
	
	a=(p*r*n)/100;
	
	printf("\n\n>>>>>=== interest ===<<<<<\n\n");
	
	printf("\n\nrate of interest is : %f",a);
}