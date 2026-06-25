//Check if a number is a Palindrome (e.g., 121).
#include<stdio.h>
int main()
{
int n,rem,rev=0,dup;
printf("\n Enter a number");
scanf("%d",&n);
dup=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(dup==rev)
 printf(" Number is Palindrome");
else
 printf("\n Number is not Palindrome");
return 0;
}