//" Find the first and last Position " / Kaden's Algo 
#include <stdio.h>
int main()
{
int a[10], n, key;
int i, first = -1, last = -1;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter array elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("Enter element to search: ");
scanf("%d", &key);
for(i = 0; i < n; i++)
{
if(a[i] == key)
{
if(first == -1)
first = i;
last = i;
}
 }
if(first == -1)
    printf("Element not found");
else
{
printf("First Position = %d\n", first);
printf("Last Position = %d\n", last);
}
return 0;
}