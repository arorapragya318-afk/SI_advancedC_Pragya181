//Input and print array elements using pointers.
#include <stdio.h>
int main()
{
int arr[10], n, i;
int *ptr;
printf("Enter the number of elements: ");
scanf("%d", &n);
ptr = arr;
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
{
    scanf("%d", ptr + i);
}
printf("Array elements are:\n");
for(i = 0; i < n; i++)
{
    printf("%d ", *(ptr + i));   
}
return 0;
}