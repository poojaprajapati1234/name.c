#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1|| i==3||(i==2&&j==5))
		{
			printf("* ");
		}		
	    else
	    {
	    	printf("  ");
		}
			
		}
		printf("\n");
		
	}
		printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==5||j==5)
			{
				printf("* ");
				
			}
		else
		{
			printf("  ");
		}
			
		}
		printf("\n");	
    }
	
		printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==5||j==5)
			{
				printf("* ");
				
			}
		else
		{
			printf("  ");
		}
			
		}
		printf("\n");	
    }
	
	    printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==3 || (i==5  && j==1))
			{
				printf("* ");
			}
			else if (i==5&&j==2)
			{
			    printf("* ");	
			}
		else
		{
			printf("  ");
	    }
	    
		}
		printf("\n");
		}  
		
		printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==3||j==5)
			{
				printf("* ");
			}
		else
		{
			printf("  ");
    	}
    	
		}
		printf("\n");
		
		  }	  
}
