//WAP to find first 15 even numbers of fibonacci series
#include<stdio.h>
int main()
{
    int a=0,b=1,c,count=0;
    printf("First 15 even numbers in Fibonacci series:\n");
    while(count<15)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
        {
            printf("%d ",c);
            count++;
        }
    }
    return 0;
}