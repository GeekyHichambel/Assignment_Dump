#include <stdio.h>
int main()//Program to find hcf of two numbers
{
	int a,b,sm,hcf=1;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b); 
    sm=(a<b)?a:b;//Takes the smaller number
    for (int i=1;i<=sm;i++)//Iterates till smaller number 'cause the hcf can be not more than that
    {
    	if (a%i==0&&b%i==0)//Runs till the remainder is 0 for both the numbers
    	{
    		hcf=i;//Stores the value of divisor
    	}
    }
    printf("The HCF is: %d",hcf);
	return 0;
}