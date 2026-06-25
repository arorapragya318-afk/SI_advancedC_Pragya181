//Check if a number is even or odd (using bitwise operators).
//binary number ending in 1 are odd and ending in 0 are even
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1)
        printf("%d is Odd", num);
    else
        printf("%d is Even", num);
    return 0;
}