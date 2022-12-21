#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);
int mod(int a,int b);
main()
{
	char no,n;
	int a,b,c;
	
	printf("press '+' for add....!!\n");
	printf("press '-' for sub....!!\n");
	printf("press '*' for multi....!!\n");
	printf("press '/' for div....!!\n");
	printf("press '%' for mod....!!\n");
	
	do
	{
		printf("\nenter the choise:");
		scanf(" %c",&no);
	
		printf("\nenter the value of A:");
		scanf("%d",&a);
		printf("\nenter the value of B:");
		scanf("%d",&b);	
	
	
	    switch(no)
	   {
		    case '+':
			
			    c=add(a,b);
			    printf("\nadd is %d & %d= %d",a,b,c);
			    break;
		    case '-':
			
			    c=sub(a,b);
			    printf("\nsub is %d & %d= %d",a,b,c);
			    break;
		    case '*':
			
			    c=multi(a,b);
			    printf("\nmulti is %d & %d= %d",a,b,c);	
			    break;
		    case '/':
			
			    c=div(a,b);
			    printf("\ndiv is %d & %d= %d",a,b,c);
			    break;
		    case '%':
			
				c=mod(a,b);
				printf("\nmod is %d & %d= %d",a,b,c);
				break;
			default:
				printf("wrong choise........!!!");
			
		}
		

	
		printf("\n\n>>>>>>=== enter your feedback ===<<<<<<\n\n");
	
		printf("\npress Y for continu calculate:");
		printf("\npress F for complit calculate:\n");
		scanf(" %c",&n);
	
	}while(n=='Y' || n=='y');
	
	
}

int add(int a,int b)
{	
	int c;
	
	c=a+b;
	
	return c;
}
int sub(int a,int b)
{	
    int c;
    
	c=a-b;
	
	return c;
}
int multi(int a,int b)
{
	int c;
	
	c=a*b;
	
	return c;
}
int div(int a,int b)
{
	int c;
	
	c=a/b;
	
	return c;
}
int mod(int a,int b)
{
	int c;
	
	c=a%b;
	
	return c;
}