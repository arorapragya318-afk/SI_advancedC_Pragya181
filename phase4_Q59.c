//Check if a string is a Palindrome.
#include <stdio.h>
int main() 
{
char str[100];
int i, len = 0, palindrome = 1;
printf("Enter a string: ");
scanf("%s", str);
while (str[len] != '\0') 
{
len++;
}
for (i = 0; i < len / 2; i++) 
{
if (str[i] != str[len - 1 - i]) 
{
palindrome = 0;
break;
}
 }
if (palindrome)
printf("String is a Palindrome\n");
else
printf("String is not a Palindrome\n");
return 0;
}