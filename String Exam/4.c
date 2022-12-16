#include<stdio.h>
main()
{
	char a[100];
	int n,i,VOWELS=0,CONSTANTS=0;
	
	printf("enter the string:");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
		    VOWELS++;
		}
		else if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
		    VOWELS++;
		}
		else
		{
			CONSTANTS++;
		}
		
	}
	
	printf("VOWELS in string is:%d\n\n",VOWELS);
	printf("CONSTANTS in string is:%d\n\n",CONSTANTS);
}