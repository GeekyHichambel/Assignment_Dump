#include <stdio.h>
#include <string.h>
int main()
{
   int C,D,s=0;
    printf("Enter the first value : ");
    scanf("%d",&C);
    printf("Enter the second value : ");
    scanf("%d",&D);
    s=C;
    C=D;
    D=s;
    printf("The value of C: %d\n",C);
    printf("The value of D: %d\n",D);

	return 0;
}
