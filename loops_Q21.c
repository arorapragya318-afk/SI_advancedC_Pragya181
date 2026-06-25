// Check if a number is a Prime number.
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("\n given number %d is prime number",n);
    else
    printf("\n given number %d is not prime",n);
    return 0;
}