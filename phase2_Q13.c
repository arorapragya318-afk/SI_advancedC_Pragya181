//Find the largest of three numbers.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    printf("x is largest");
    else if(y>z&&y>x)
    printf("y is largest");
    else
    printf("z is largest");
    return 0;
}