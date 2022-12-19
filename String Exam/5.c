#include<stdio.h>
main()
{
	char a[100];
	char b[100];
	int l[100];
	int i,n,len=0,count=0;
	
	printf("enter the string:");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<=n;i++)
	{
	    if(a[i]!=' '&& a[i]!='\0')
		{
			printf("%d = %d\n",count,len);
			len++;
		}
		else if(i==n-1)
		{
			l[count]=len;
			count++;
			len=0;
		}
		else
		{
			l[count]=len;
			count++;
			len=0;
		}	
	}
	
	printf("\n\n>>>>>==========<<<<<\n\n");
	
	for(i=0;i<count;i++)
	{
		printf("=%d\n",l[i]);
	}
}