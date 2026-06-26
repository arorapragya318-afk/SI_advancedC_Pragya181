//Reverse an array using pointers. 
#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40, 50};
int *start = a;
int *end = a + 4;
int temp, i;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
printf("Reversed array:\n");
for (i = 0; i < 5; i++)
{
    printf("%d ", a[i]);
}
return 0;
}
    