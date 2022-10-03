//An array is a set of different types of values. It can contain various dimensions of data 
#include <stdio.h>
int main()
{  
    int i,num=1,no=0;
    char a[15];
    char b[15];
    char c[15];
    printf("Enter the subjects\n");
    scanf("%s %s %s",&a,&b,&c);

    printf("Enter the no. of students\n");
    scanf("%d",&no);

    int arr[no][3];//Array for storing the marks of 'n' no. of students in 3 subjects
    printf("Enter the marks: \n");

    for (i=0;i<no;i++)//Input of data
    {
     printf("Student %d\n",num);
     printf("%s %s %s\n",a,b,c);
     scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
     num+=1;
    }
     num=num-no;
     printf("\n");

     printf("<< The marks are : >>\n");
     
     for (i=0;i<no;i++)//Output of data
    {
     printf("Student %d\n",num);
     printf("%s %s %s\n",a,b,c);
     printf("%d      %d       %d\n",arr[i][0],arr[i][1],arr[i][2]);
     printf(" < < < < < > > > > > \n");
     num+=1;
    }
return 0;
}