//Swap two numbers without a temporary variable.
#include<stdio.h>
int main()
{
    int a , b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swap are %d and %d",a,b);
    return 0;
}