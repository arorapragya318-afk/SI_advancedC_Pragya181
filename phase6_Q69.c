//Swap two arrays using pointers. 
#include <stdio.h>
int main()
{
int a[5] = {1, 2, 3, 4, 5};
int b[5] = {6, 7, 8, 9, 10};
int *p1 = a;
int *p2 = b;
int temp, i;
for (i = 0; i < 5; i++)
{
temp = *p1;
*p1 = *p2;
*p2 = temp;
p1++;
p2++;
}
printf("First array after swap:\n");
for (i = 0; i < 5; i++)
{
    printf("%d ", a[i]);
}
printf("\nSecond array after swap:\n");
for (i = 0; i < 5; i++)
{
    printf("%d ", b[i]);
}
return 0;
}