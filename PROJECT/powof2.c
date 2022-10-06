#include <stdio.h>
int main()
   {
    int a;
	 printf("Enter the no: ");
	 scanf("%d",&a);
	 bool ispowof2=a&(a-1);
	  if (ispowof2==0)
	 {
	 printf("Result: True");
	 }
	 else
	 { 
	 	printf("Result: False");
    }
	return 0;
   }