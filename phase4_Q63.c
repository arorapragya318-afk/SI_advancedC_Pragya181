//Remove all characters in a string except alphabets.
#include <stdio.h>
int main() 
{
char str[100];
int i, j = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++) 
{
if ((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z')) 
{
str[j++] = str[i];
}
 }
str[j] = '\0';
printf("Result: %s\n", str);
return 0;
}