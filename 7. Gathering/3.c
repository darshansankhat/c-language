#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);
int mod(int a,int b);
main()
{
	int a,b;
	
	add(a,b);
}
int add(int a,int b)
{
	int c;
	
	printf("\n\n>>>>=== for addition ===<<<<\n\n");
	
	printf("\nenter the no A:");
	scanf("%d",&a);
	printf("\nenter the no B:");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\nadition is : %d",c);
	
	sub(a,b);
}
int sub(int a,int b)
{
	int c;
	
	printf("\n\n>>>>=== for substricton ===<<<<\n\n");
	
	printf("\nenter the no A:");
	scanf("%d",&a);
	printf("\nenter the no B:");
	scanf("%d",&b);
	
	c=a-b;
	
	printf("\nsubstricton is : %d",c);
	
	multi(a,b);
}
int multi(int a,int b)
{
	int c;
	
	printf("\n\n>>>>=== for multiplicaton ===<<<<\n\n");
	
	printf("\nenter the no A:");
	scanf("%d",&a);
	printf("\nenter the no B:");
	scanf("%d",&b);
	
	c=a*b;
	
	printf("\nmultiplicaton is : %d",c);
	
	div(a,b);
}
int div(int a,int b)
{
	int c;
	
	printf("\n\n>>>>=== for divison ===<<<<\n\n");
	
	printf("\nenter the no A:");
	scanf("%d",&a);
	printf("\nenter the no B:");
	scanf("%d",&b);
	
	c=a/b;
	
	printf("\ndivison is : %d",c);
	
	mod(a,b);
}
int mod(int a,int b)
{
	int c;
	
	printf("\n\n>>>>=== for modual ===<<<<\n\n");
	
	printf("\nenter the no A:");
	scanf("%d",&a);
	printf("\nenter the no B:");
	scanf("%d",&b);
	
	c=a%b;
	
	printf("\nmodual is : %d",c);
}