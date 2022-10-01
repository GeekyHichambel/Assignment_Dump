//Classic example of bubble sorting 
#include <stdio.h>
int main()
{
	int arr[10],i,j;
	printf("Enter the 10 values for array\n");
	for (i=0;i<10;i++)//Takes 10 entries from keyboard
	{
     scanf("%d",&arr[i]);
	}
    for (i=0;i<9;i++)
    {
    	for (j=0;j<=9-i;j++)//variable j acts a pointer here determining the location of element.
    	{
    		if (arr[j]>arr[j+1])//It will compare the element at previous place with element next to it.
    		{
    			//SORTING
    			int swap = arr[j];//We take swap variable for temporarily storing the bigger element then interchanging it with smaller one
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
    		}
    	}
    }
    //Output
    printf("\nThe sorted array is given below\n");
    printf("[");
    for (i=0;i<10;i++)
    {
     printf(" %d ",arr[i]);
    }
    printf("]");
return 0;
}
