#include <stdio.h>
int main()
{
	int x,y,z,gr,sum;
	printf("Enter the three sides of the triangle\n");
	scanf("%d %d %d",&x,&y,&z);
	if ((x+y>z) && (y+z>x) && (x+z>y))
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
	return 0;
}
