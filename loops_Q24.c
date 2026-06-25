//Check if a number is an Armstrong number (e.g., 153).
#include <stdio.h>
int main()
{
    int num, dup, digit, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    dup = num;
    while(num > 0)
    {
        digit = num % 10;
        rem = rem + (digit * digit * digit);
        num = num / 10;
    }
    if(rem == dup)
        printf("%d is an Armstrong number.\n", dup);
    else
        printf("%d is not an Armstrong number.\n", dup);
    return 0;
}