//Missing No. / Majority element/ Moore's Voting Algorithm
#include <stdio.h>
int main() 
{
int arr[] = {2, 2, 1, 2, 3, 2, 2};
int n = sizeof(arr) / sizeof(arr[0]);
int num, count = 0;
for (int i = 0; i < n; i++) 
{
if (count == 0)
{
num = arr[i];
count = 1;
} 
else if (arr[i] == num) 
{
count++;
} 
else 
{
count--;
}
 }
count = 0;
for (int i = 0; i < n; i++) 
{
if (arr[i] == num)
count++;
}
if (count > n / 2)
    printf("Majority Element = %d\n", num);
else
    printf("No Majority Element\n");
    return 0;
}