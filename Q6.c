//equilibrium index
//Problem Description Determine the equilibrium index of an array where the sum of elements at lower indices is equal to the sum of elements at higher indices. 
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    int totalSum = 0, leftSum = 0;
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }
    for(i = 0; i < n; i++) 
    {
        totalSum -= arr[i]; // right sum
        if(leftSum == totalSum) 
        {
            printf("Equilibrium Index = %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }
    printf("No Equilibrium Index found.\n");
    return 0;
}