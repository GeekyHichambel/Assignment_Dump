#include <stdio.h>
int main(int a)
{
 printf("Enter the distance between the two cities in km\n");
 scanf("%d",&a);
 printf("\nThe distance in km: %d",a);
 printf("\nThe distance in inches: %f",a*39370.0787);
  printf("\nThe distance in cms: %d",a*100000);
 printf("\nThe distance in metres: %d",a*1000);
 printf("\nThe distance in feets: %f",a*3280.8399);
 return 0;
}
