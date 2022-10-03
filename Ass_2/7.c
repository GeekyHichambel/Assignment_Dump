//PROGRAM FOR REMOVING DUPLICATES FROM A SORTED ARRAY
#include <stdio.h>
int main()
{
	int arr[]={2,6,6,8,10,12,13,13};
	int i,j,tmp,n=8;
	for (i=0;i<n;i++)
	{
		for (j=1;j<n;j++)
		{
    	 if (arr[j]==arr[j+1])
			{
             for (tmp=j;tmp<n;tmp++)
             {
              arr[tmp]=arr[tmp+1];
             }
             j--;
             n--;
			}
		}	
	
	}
	printf("The new array is : [ ");
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]");
	return 0;
}