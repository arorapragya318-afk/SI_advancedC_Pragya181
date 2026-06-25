//Remove duplicate elements from an array.
#include <stdio.h>
int main()
{
int a[100], n, i, j;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Array after removing duplicates:\n");
for(i = 0; i < n; i++)
{
int duplicate = 0;
for(j = 0; j < i; j++)
{
if(a[i] == a[j])
{
duplicate = 1;
break;
}
 }
if(duplicate == 0)
{
printf("%d ", a[i]);
}
 }
return 0;
}