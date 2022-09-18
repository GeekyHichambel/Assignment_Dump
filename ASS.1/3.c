#include <stdio.h>
int main()
{
	int a,b,c,d,e,agg;
	float per;
	printf("Enter your marks for five subjects\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	//aggregate marks and percentage
	agg=a+b+c+d+e;
	per=agg/5;
	printf("Your aggregate marks are:%d",agg);
	printf("/500\n");
	printf("\nYour percetage is:%f",per);
	
	return 0;
}
