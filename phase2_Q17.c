//Create a simple calculator using switch case.
#include<stdio.h>
int main()
{
    char op;
    float first,second;
    printf("enter an operator (+,-,*,/):");
    scanf("%c",&op);
    printf("\n enter two operands : ");
    scanf("%f%f",&first,&second);
    switch(op)
    {
        case'+':
        printf("addition is %f",first+second);
        break;
        case'-':
        printf("subtraction is %f",first-second);
        break;
        case'*':
        printf("multiplication is %f",first*second);
        break;
        case'/':
        printf("division is %f",first/second);
        break;
        default:
        printf("error! operator is not correct");
    }
    return 0;
    }