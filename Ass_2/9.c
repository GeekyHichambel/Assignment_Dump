#include <stdio.h>
#include <math.h>
int main()
{
	//armstrong numbers between 1 to 500
	int i,j,k,num,arm;
	printf("The armstrong numbers are:\n");
    for (i=0;i<5;i++)
    {
     for (j=0;j<10;j++)
     {
      for (k=0;k<10;k++)
      {
      	num=i*100+j*10+k;
      	arm=pow(i,3)+pow(j,3)+pow(k,3);
      	if (arm==num)
      	{
      	 printf("%d\n",num);
      	}
      }
     }
    } 
	return 0;
}