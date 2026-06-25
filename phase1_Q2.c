//Read an integer/float/char and print it.
#include <stdio.h>
int main()
{
    int n1;
    float n2;
    char n3;
    scanf("%d", &n1);
    printf("integer : %d\n", n1);
    scanf("%f", &n2);
    printf("float : %f\n", n2);
    scanf("%c", &n3);
    printf("character : %c\n", n3);
    return 0;
}