//PROGRAM FOR FINDING DIAMETER,CIRCUMFRENCE AND AREA OF CIRCLE USINF FUNCTIONS
#include <stdio.h>
float dia(float r)
{
 float dia=2*r;
 printf("Diameter=%f\n",dia);
}
double circum(float r)
{
	double c=2*3.14*r;
	printf("Circumfrence=%lf\n",c);
}
double area(float r)
{
	double a=3.14*r*r;
	printf("Area=%lf\n",a);
}
int main()
{
	float r;
	printf("Enter radius of circle: ");
	scanf("%f",&r);
	dia(r);
	circum(r);
	area(r);
}