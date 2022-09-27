/* GRADE SYSTEM
  4.5 TO 5.0 = A+
  3.5 TO 4.5 = A
  2.5 TO 3.5 = B
  2.0 TO 2.5 = C
  1.5 TO 2.0 = D
  1.0 TO 1.5 = E
  0.0 TO 1.0 = F*/
#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    double sum,gr;
    printf("Enter the marks for five subjects, weighing 100 marks each \n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    gr=sum/100;
    printf("Your total marks : %lf\n",sum);
    if (gr>5.0)
    {
     printf("The total max exceed 500");
    }
    else
    {
     if (gr>0&&gr<=1.0)
     {
      printf("Your grade is F");
     }
     if (gr>1.0&&gr<=1.5)
     {
     	printf("Your grade is E");
     }
     if (gr>1.5&&gr<=2.0)
     {
     	printf("Your grade is D");
     }
     if (gr>2.0&&gr<=2.5)
     {
     	printf("Your grade is C");
     }
     if (gr>2.5&&gr<=3.5)
     {
     	printf("Your grade is B");
     }
     if (gr>3.5&&gr<=4.5)
     {
     	printf("Your grade is A");
     }
     if (gr>4.5&&gr<=5.0) 
     {
      printf("Your grade is A+");
     }
    } 
	return 0;
}
