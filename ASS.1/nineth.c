#include <stdio.h>
int main()
{
	int a,b,c;
	  printf("Enter the three numbers \n");
   scanf("%d %d %d",&a,&b,&c);
   if (a>b&&a>c) 
   {
     printf("A is the greatest");
   }
   else
   {
   	if (b>a&&b>c) 
   	{
   		printf("B is the greatest");
   	}
   	else{
   		printf("C is the greatest");
   	}
   }
return 0;
}