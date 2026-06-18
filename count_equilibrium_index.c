//WAP to count total equilibrium index from a given array 
#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(i = 0; i < n; i++)
     {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++)
            leftSum += arr[j];
        for(int j = i + 1; j < n; j++)
            rightSum += arr[j];
        if(leftSum == rightSum)
            count++;
    }
    printf("Total Equilibrium Indices = %d", count);
    return 0;
}