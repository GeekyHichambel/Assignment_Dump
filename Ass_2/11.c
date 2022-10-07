#include <stdio.h>
#include <string.h>
int main()
{
	//Program for sorting string array in alphebatical order
	char arr[5][100];
	int i,j;
	printf("Enter the 5 names\n");
	for (i=0;i<5;i++)
	 {
		scanf("%s",&arr[i]);
   	 }
     char* temp[5];
   	 for (i=0;i<5;i++)
   	 {
   	 	for (j=i+1;j<5;j++)
   	 	{
         if (strcmp(arr[i],arr[j])<0)
         	
         	{
             strcpy(temp[0],arr[i]);
             strcpy(arr[i],arr[j]);
             strcpy(arr[j],temp[0]);
   	 	    }
   	 	}
   	 }
    //Printing after sorting
   	 printf("The array in alphabetical order is ");
   	 for (i=5;i>=0;i--)
   	 {
      printf("%s,",arr[i]);
   	 }

	return 0;
}