#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the three numbers \n");
   scanf("%d %d %d",&a,&b,&c);

   (a>b&&a>c)?printf("a is the greatest number"):(b>a&&b>c)?printf("b is the greatest number"):printf("c is the greatest number");

	return 0;
}
