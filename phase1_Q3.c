//Swap two numbers using a temporary variable.
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swap are %d and %d", a, b);
    return 0;
}