#include <stdio.h>
int main()
{
	char ch;
	printf("Enter the uppercase character");
	scanf("%c",&ch);
	ch=ch+32;
	printf("The lowercase character is: %c",ch);
	return 0;
}
