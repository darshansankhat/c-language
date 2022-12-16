#include<stdio.h>
main()
{
	char a[100];
	int i,n,count=0,b;
	
	printf("enter the string:");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			count++;
		}
		if(a[i]==' ')
		{
			b=count;
			printf("%c",a[i]);
		}
		
	}
	
	printf("%d",count);
}