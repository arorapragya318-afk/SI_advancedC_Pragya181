// Copy one array to another using pointers. 
#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40, 50};
int b[5];
int *p1 = a;   
int *p2 = b;  
int i;
for (i = 0; i < 5; i++)
{
*p2 = *p1;
p1++;
p2++;
}
printf("Copied array:\n");
for (i = 0; i < 5; i++)
{
    printf("%d ", b[i]);
}
    return 0;
}