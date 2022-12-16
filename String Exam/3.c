#include<stdio.h>
main()
{
	char a[100];
	int i,n,alphabet=0,no=0,sp_char=0;
	
	printf("enter the string:");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
		{
			printf("%c",a[i]);
			alphabet++;
		}
		else if(a[i]>='1' && a[i]<='9')
		{
			printf("%d",a[i]);
			no++;
		}
		else
		{
			sp_char++;
		}
	}
	
	printf("\nalphabet is :%d\n",alphabet);
	printf("no is :%d\n",no);
	printf("sp_char is :%d\n",sp_char);
}