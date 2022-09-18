#include <stdio.h>
int main()
{
	int d;
	printf("Enter the no. of days : ");
	scanf("%d",&d);

	//conversion
	printf("The no. of years : %d ||\t",d/365);
	printf("The no. of months : %d ||\t",d/30);
	printf("The no. of weeks : %d",d/7);
	return 0;
}