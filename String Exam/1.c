#include<stdio.h>
main()
{
	char a[100],b;
	int i,n;
	
	printf("enter the string:");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]<97)
		{  
		    b=a[i]+32;
				
		    printf("%c",b);
        }
		else
		{
			b=a[i]-32;
			
			printf("%c",b);
		}
	}                        
}