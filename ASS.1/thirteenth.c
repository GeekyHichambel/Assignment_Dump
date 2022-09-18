#include <stdio.h>
int main()
{
	int n,sum;
	printf("Enter the toatl numbers : ");
	scanf("%d",&n);

	//solving
    sum=n*(n+1)/2;
    //output
    printf("The total sum till %d is %d",n,sum);
}