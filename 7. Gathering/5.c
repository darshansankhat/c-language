#include<stdio.h>
main()
{
	int no,a,b,count,x,sum=0;
	int z=1;
	int i,j;
	
	printf("enter the value of A:");
	scanf("%d",&no);
		
	a=no;
	x=no;
	
	
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	
	for(i=1;i<=count;i++)
	{
		b=x%10;
		z=b;
		for(j=1;j<count;j++)
		{
			z=z*b;
		}
		x=x/10;
		
		sum=sum+z; 
	}
	
	if(sum==a)
	{
		printf("%d Is Amstrong........!!!",sum);
	}
	else
	{
		printf("This Is not Amstrong........!!!");
	}
}

