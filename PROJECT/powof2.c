#include <stdio.h>
int main()
   {
    int a;
	 printf("Enter the no: ");
	 scanf("%d",&a);
	 bool ispowof2=a&(a-1);//it will return 0 if both the bit-values don't have same no. of bits, if not it returns 1
         /*Ex: ispowof2=32&31
               (Here 32 got 6 bits while 31 got only 5 bits)
           That's how we get 0.So we know it's a power of 2*/ 
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
