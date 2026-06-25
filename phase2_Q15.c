//Check if a character is a vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("%c is a vowel",ch);
    else
    printf("%c is a consonant",ch);
    return 0;
}