#include <stdio.h>
int main()
{
	int ch;
	printf("Enter the data type for size:|1 for int|2 for char|3 for float|4 for double|\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("The size of int is 2 Bytes");
	break;
    case 2:
	printf("The size of char is 1 Byte");
	break;
    case 3:
	printf("The size of float is 4 Bytes");
	break;
	case 4:
	printf("The size of double is 8 Bytes");
	break;
	default:
	printf("Poor choice");
	break;
	}
	return 0;
}