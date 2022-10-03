#include <stdio.h>
 int main()
{
	int opt;
	printf("Choose from 1 to 5 for prinitng a pattern\n");
	scanf("%d",&opt);
    //Pattern1:Rightsided triangle
	if (opt==1)
	{
		int i,j;
		for (i=0;i<=5;i++)
		{
			for (j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	//Pattern2:Inverted Rightsided triangle
	if (opt==2)
	{
		int i,j;
		for (i=5;i>0;i--)
		{
			for (j=0;j<i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	//Pattern3:Leftsided triangle
	if (opt==3)
	{
		int i,j;
		for (i=1;i<=5;i++)
		{
			for (j=i;j<5;j++)
			{
				printf(" ");
			}
			for (j=1;j<=i;j++)
			{
			 printf("*");
			}
			printf("\n");
		}
	}
	//Patter4:Inverted Leftsided triangle
	if (opt==4)
	{
	    int i,j;
	    for(i=1;i<=5;i++)
	    {
	        for (j=1;j<i;j++)
	        {
	            printf(" ");
	        }
	        for (j=i;j<=5;j++)
	        {
	            printf("*");
	        }
	       printf("\n"); 
	    }
	}
	//Pattern5:The Kite
	if (opt==5)
    {
    printf("    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    printf(" ******* \n");
    printf("*********\n");
    printf(" ******* \n");
    printf("  *****  \n");
    printf("   ***   \n");
    printf("    *    \n");
    }
	//Exceptional input handling
	if (opt==0||opt>5)
	{
		printf("Bad choice");
	}
	return 0;
}