#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int  n;
	
	printf("enter the string:");
	gets(a);
	
	strcpy(b,a);
	
	puts(b);
	
	printf("\n\n>>>>> revrrse is <<<<<\n\n");
	
	strrev(a);
	
	puts(a);
	
	printf("\n\n");
	
	n=strcmp(a,b);
	
	if(n==0)
	{
		printf("string is palindrome.........!!!");
	}
	else
	{
		printf("string is not palindrome.........!!!");
	}
}
