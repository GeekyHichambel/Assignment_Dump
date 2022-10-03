#include <stdio.h>
int main()
{
	int i,j,n;
	int arr[90];
	printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("The entered elements are [ ");
    for (i=0;i<n;i++)
    {
     printf("%d ",arr[i]);
    }
    printf("]");
    for (i=0;i<9;i++)
    {
    	for (j=0;j<=9-i;j++)
    	{
    		if (arr[j]>arr[j+1])
    		{
    			//SORTING
    			int swap = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
    		}
    	}
    }
    printf("\nThe second smallest : %d",arr[1]);
    return 0;
}