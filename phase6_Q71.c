//Search for an element in an array using pointers. 
#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40, 50};
int *p = a;
int key, i, found = 0;
printf("Enter element to search: ");
scanf("%d", &key);
for (i = 0; i < 5; i++)
{
if (*p == key)
{
found = 1;
printf("Element found at position %d", i + 1);
break;
}
p++;
}
if (found == 0)
{
    printf("Element not found");
}
return 0;
}