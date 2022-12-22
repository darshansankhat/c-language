#include<stdio.h>
void circle(float r);
main()
{
	float a;
	
	circle(a);
}
void circle(float r)
{
	float a;
	
	printf("enter the radius:");
	scanf("%f",&r);
	
	a=3.14*r*r;
	
	printf("\n\n >>>>>=== areya of circle ===<<<<<\n\n");
	
	printf("areya of circle is : %f",a);
}