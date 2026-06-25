//Calculate the area and circumference of a circle.
#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("\n Enter radius of circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of circle is : %f ",area);
    circumference=2*3.14*radius;
    printf("circumference of circle is : %f ",circumference);
    return 0;
}