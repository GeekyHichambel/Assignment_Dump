//CODE FOR PRINTING EVEN CHARACTERS OF THE STRING
#include <stdio.h>
#include <string.h>
int main()
{
char arr[100];
printf("Enter a string : ");
scanf("%s",&arr);
int len=strlen(arr);
for (int i=1;i<len;i++)
{
 printf("%c",arr[i]);
 ++i;
}
return 0;
}