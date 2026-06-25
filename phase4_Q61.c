//Convert a string to lowercase/uppercase.
#include <stdio.h>
#include <string.h>
int main() 
{
char str[100];
printf("Enter a string: ");
gets(str);
printf("Lowercase: %s\n", strlwr(str));
printf("Uppercase: %s\n", strupr(str));
return 0;
}