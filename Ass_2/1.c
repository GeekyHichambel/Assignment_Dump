#include <stdio.h>
int main()
{
	int a,opt; 
	printf("1 for input,2 for exit\n");
    printf("Enetr your choice : ");
    scanf("%d",&opt);
    //While being an entry controlled loop,will check for the condition first. 
     while(opt==2)
    {
     printf("Bye Bye\n");
     break;//Here the control will shift to do while loop.
    }
    //Do while being an exit controlled loop,will process the statements first and then check for the condition.  
	do{
	printf("Enter your favourite number: ");
	scanf("%d",&a);
	printf("Good choice\n");
	opt++;
    }     
    while(opt<2); 
	return 0;
}