#include<stdio.h>
main()
{
	char a[100];
	int i,j,n=0,count=0;
	
	printf("enter the string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]='\0';
			}
		}
		
		if(a[i]!='\0'&& a[i]!=' ')
		{
		    printf("%c = %d \n",a[i],count);
	    }
	}
}
