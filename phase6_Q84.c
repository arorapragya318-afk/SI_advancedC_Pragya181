//Word Frequency Counter
#include <stdio.h>
#include <string.h>
int main()
{
char words[20][20];
char search[20];
int n, i, count = 0;
printf("Enter number of words: ");
scanf("%d", &n);
printf("Enter the words:\n");
for(i = 0; i < n; i++)
scanf("%s", words[i]);
printf("Enter word to search: ");
scanf("%s", search);
for(i = 0; i < n; i++)
{
if(strcmp(words[i], search) == 0)
count++;
}
printf("Frequency of '%s' = %d", search, count);
return 0;
}
