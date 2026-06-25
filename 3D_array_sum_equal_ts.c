//WAP to take an array from a user and return subarray of 3 degree whose sum is equal to the targeted sum
#include <stdio.h>
int main()
 {
    int n, target, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    for(i = 0; i <= n - 3; i++)
     {
        if(arr[i] + arr[i+1] + arr[i+2] == target) {
            printf("Subarray found: %d %d %d\n",
                   arr[i], arr[i+1], arr[i+2]);
            return 0;
        }
    }
    printf("No subarray of size 3 found with sum %d", target);
    return 0;
}