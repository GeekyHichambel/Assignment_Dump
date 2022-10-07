#include <stdio.h>
int main()
{
	//Program for multplication of two matrices
	int mat1[69][69];
	int mat2[69][69];
	int result[69][69];
	int i,j,k,a,b,c,d;
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d",&a,&b);
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d",&c,&d);

    if (a==d)
    {	
    //EntryMatrix_1
	printf("Enter the elements for matrix1:\n");
	for (i=0;i<a;i++)
       {	 
       for (j=0;j<b;j++)
       {
        scanf("%d",&mat1[i][j]);
       }
	  }
      
      //EntryMatrix_2
	  printf("Enter the elements for marix2:\n");
	  for (i=0;i<c;i++)
	  {
	  	for (j=0;j<d;j++)
	  	{
         scanf("%d",&mat2[i][j]);
	  	}
	  }

	  //Multiplication
	  for (i=0;i<b;i++)
	  {
	  	for (j=0;j<c;j++)
	  	{
	  		result[i][j]=0;
	  		for (k=0;k<b;k++)
	  		{
             result[i][j]=result[i][j]+mat1[i][k]*mat2[k][j];
            }
        } 
     }
     //Printing of Result
      printf("The final matrix: \n");
      printf("< < < < < > > > > >\n");
      for (i=0;i<b;i++)
      {
      	for (j=0;j<c;j++)
      	{
         printf("%d ",result[i][j]);
        }
        printf("\n");
      }
      printf("< < < < < > > > > >");
  }
  else
  {
  	printf("The matrix is not possible");
  }
	return 0;
}