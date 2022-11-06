//Representation and description of various pre-defined string functions
#include <string.h>
#include <stdio.h>
int main()
{
	char str[100],temp[100],brr[100];
	printf("Enter a string: ");
    scanf("%s",&str);
    
    //Strcpy() function is for copying a string and assigning it a new location
    strcpy(temp,str);
    printf("The copied string is: %s\n",temp);
    
    //Strcmp() function gives -ve value if str1 is less than str2;
    //0 if str1 is equal to str2;
    //and +ve value if str1 is greater than str2;     
    printf("Enter one more string: ");
    scanf("%s",&brr);
    int a=strcmp(brr,str);
     if (a==0)
    {
        printf("The strings are equal\n");
    }
    if (a<0)
    {
        printf("Str1 is greater than Str2\n");
    }
    if (a>0)
    {
        printf("Str2 is greater than Str1\n");
    }

    //Strlen() returns the length of the stored string 
    int len=strlen(brr);
    printf("len is: %d\n",len);

    //Strcat() appends two string values 
    strcat(str,brr);
    printf("%s",str);
    return 0;
}