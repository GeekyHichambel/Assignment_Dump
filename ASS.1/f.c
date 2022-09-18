//Basic type casting 
#include <stdio.h>
int main()
{
	float f;
	printf("Enter the float number : ");
	scanf("%f",&f);
	
	int b;
	b=f;
	printf("The number after type casting is %d\n",b);
	return 0;
}
