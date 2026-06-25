//WAP TO CHECK WHETHER A NUMBER IS BOTH ARMSTRONG AND SPY NUMBER
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int isArmstrong = 0;
    int tempA=num;
    int digits = 0, sumA = 0;
    while(tempA > 0)
    {
        digits++;
        tempA /= 10;
    }
    tempA = num;
    while(tempA > 0)
    {
        sumA += round(pow(tempA % 10, digits));
        tempA /= 10;
    }
    if(sumA == num)
    {
        isArmstrong = 1;
    }
    int isSpy = 0;
    int tempS=num;
    int digitSum=0,digitproduct=1;
    while(tempS>0)
    {
        int currentDigit=tempS%10;
        digitSum+=currentDigit;
        digitproduct*=currentDigit;
        tempS/=10;
    }
    if(digitSum==digitproduct)
    {
        isSpy=1;
    }
    if(isArmstrong && isSpy)
    {
        printf("%d is both an Armstrong and Spy number.\n", num);
    }
    else
    {
        printf("%d is not both an Armstrong and Spy number.\n", num);
    }
    return 0;
}
