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
		if(a[i]!=' ')
		{
		    printf("%c",a[i]);
	    }
	}
}
