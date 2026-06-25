//Calculate Simple Interest and Compound Interest.
#include<stdio.h>
#include<math.h>
int main()
{
    int si,ci,p,r,t,a;
    printf("enter principal,rate and time");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest is : %d",si);
     a = p * pow(((1 + r)/ 100), t);
    ci = a - p;
    printf("\n compound interest is : %d ",ci);
    return 0;
}