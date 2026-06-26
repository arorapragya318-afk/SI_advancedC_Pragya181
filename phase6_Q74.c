//Dutch National Flag Algorithm ( Sort 0s,1s & 2s)
#include <stdio.h>
int main() 
{
int arr[] = {2, 0, 2, 1, 1, 0};
int n = 6;
int l = 0, m = 0, h = n - 1;
int temp;
while (m <= h) 
{
if (arr[m] == 0) 
{
temp = arr[l];
arr[l] = arr[m];
arr[m] = temp;
l++;
m++;
}
else if (arr[m] == 1) 
{
m++;
}
else 
{ 
temp = arr[m];
arr[m] = arr[h];
arr[h] = temp;
h--;
}
    }
printf("Sorted array: ");
for (int i = 0; i < n; i++) 
{
printf("%d ", arr[i]);
}
return 0;
}