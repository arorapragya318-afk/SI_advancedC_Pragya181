// Add two matrices using pointers.
#include <stdio.h>
int main()
{
int a[2][2], b[2][2], c[2][2];
int *p1, *p2, *p3;
int i;
printf("Enter elements of first matrix:\n");
for (i = 0; i < 4; i++)
scanf("%d", &a[0][0]+ i);
printf("Enter elements of second matrix:\n");
for (i = 0; i < 4; i++)
scanf("%d", &b[0][0] + i);
p1 = &a[0][0];
p2 = &b[0][0];
p3 = &c[0][0];
for (i = 0; i < 4; i++)
{
*p3 = *p1 + *p2;
p1++;
p2++;
p3++;
}
printf("Sum of matrices:\n");
for (i = 0; i < 4; i++)
{
printf("%d ", *(&c[0][0] + i));
if ((i + 1) % 2 == 0)
printf("\n");
}
return 0;
}