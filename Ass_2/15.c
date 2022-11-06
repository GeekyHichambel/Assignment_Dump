//PROGRAM FOR FINDING LENGTH,COPYING,REVERSING,UPPERCASE CONVERSION AND LOWERCASE CONVERSION OF A STRING USING FUNCTIONS
#include <stdio.h>
#include <string.h>
   
	int len(char arr[100])
	{
     int len=strlen(arr);
     printf("length: %d\n",len);
	}
	char copy(char arr[100])
	{
		char temp[100];
		strcpy(temp,arr);
		printf("Copied string: %s\n",temp);
	}
	char rvr(char arr[100])
	{
		int len=strlen(arr);
		printf("reversed string: ");
        for (int i=len;i>=0;i--)
         {
        	printf("%c",arr[i]);
         } 
	}
	char upr(char arr[100])
	{
	 int len=strlen(arr);
      
     printf("\nUppercase: ");
     for (int i=0;i<len;i++)
     {
     	int a=arr[i];
     	if (a>=97&&a<=122)
     	{
     	 printf("%c",arr[i]-32);
     	} 
        else{
     	printf("%c",arr[i]);
      }
     }
	}
	char low(char arr[100])
	{
		int len=strlen(arr);
		printf("\nLowercase: ");
		for (int i=0;i<len;i++)
		{
			int a=arr[i];
			if (a>=65&&a<=90)
			{
				printf("%c",arr[i]+32);
			}
			else{
				printf("%c",arr[i]);
			}
		}
	}
	int main()
	{
		char arr[100];
		printf("Enter a string containing upper and lowercase characters: ");
		scanf("%s",&arr);
		len(arr);
		copy(arr);
		rvr(arr);
		upr(arr);
		low(arr);
	}