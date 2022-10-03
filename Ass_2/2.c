#include <stdio.h>
int main()
{
	int i,j;
	printf("The prime numbers from 1 to 100 are:\n");
	for (i=1;i<=100;i++)//Driver Loop for the numbers
	           {
	               int inc=0;
	               for(j=2;j<=i/2;j++)//Testing Loop
	                   {
	                    if (i%j==0)
	                     {
	                        inc++;
	                        break;
	                     }
	                    }
	                     if (inc==0 && i!=1)
	                     { 
	                        printf("%d\n",i);
	                     }
	           }
	           printf("<------->");
	return 0;
}