#include <stdio.h>
void output(int a[],int b)
{
	int i;
	printf("\nElements in this Array are :\n");
	printf("{");
	for (i=0;i<b;i++)
	{ 
	 printf("%d, ",a[i]);
	}
	printf("}");	
}
int main()
{
 int arr[99],j;
 printf("Enter the no. of entries\n");
 scanf("%d",&j);
 int i=0;
 printf("Enter the elements\n");
 while (i<j) 
 {
  scanf("%d",&arr[i]);
  i++;
 }
 output(arr,j);
 return 0;
}