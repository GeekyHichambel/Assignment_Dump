#include <stdio.h>
int main()
{
	//perfect number
	int a,sum=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	for(int i=1; i<=a/2; i++)
	{
      if (a%i==0)
      {
      	sum+=i;
      }
	}
	if(sum==a) 
	{
     printf("The number is a perfect number");
    }
     else
     {
     	printf("The number is not a perfect number");
     }
	return 0;
}