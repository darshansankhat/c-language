#include<stdio.h>
main()
{
	char a[100],b,c;
	int i,n;
	
	printf("enter the string:");
	gets(a);
	
	printf("\n\n>>>>>=== press 'u' for uper case ===<<<<<\n\n");
	printf("\n\n>>>>>=== press 'l' for lower case ===<<<<<\n\n");
	
	printf("enter chose:");
	scanf("%c",c);
	
	n=strlen(a);
	
	switch(c)
	{
		case 'u':
			for(i=0;i<n;i++)
	        {
		        if(a[i]>=65 && a[i]<=90)
		        {  
		            a[i]=a[i]+32;
				
		            printf("%c",a[i]);
                }
                else
                {
                	printf("%c",a[i]);
				}
            }
            break;
            
        case 'l':
        	for(i=0;i<n;i++)
	        {
		        if(a[i]>=97)
		        {  
		            b=a[i]-32;
				
		            printf("%c",b);
                }
            }
            break;
        default:
        	
        	printf("wrong>>>>>>>>>>>>>>>>>>>>>>>>");
        	
	}
	
	              
}