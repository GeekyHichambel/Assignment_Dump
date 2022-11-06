//Code for swapping values of two variable without using third variable with concept of user-defined function
#include <stdio.h>
		void swap(int *i,int *j){
		 *i=*i+*j;
		 *j=*i-*j;
		 *i=*i-*j;
		}
	int main()
	{
		int a,b;
		printf("Enter two values: ");
		scanf("%d %d",&a,&b);
		swap(&a,&b);
        printf("The swapped values are : %d,%d",a,b);
	}