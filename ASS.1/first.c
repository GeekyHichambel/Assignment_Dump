#include <stdio.h>

	 int main()
	{
		int a;
		float b;
		char c;
		char str[25];
		printf("Enter a integer\n");
		scanf("%d",&a);

		printf("Enter a float value\n");
		scanf("%f",&b);

		printf("Enter a character\n");
		scanf("%s",&c);

		printf("Enter a string\n");
		scanf("%s",&str);

		//printing integer value
		printf("The integer is : %d\n",a);
		//printing float value
		printf("The float value is : %f\n",b);
		//printing the character value
		printf("The character is : %c\n",c);
		//printing the string value
		printf("The string is: %s\n",str);
		
		return 0;
	}