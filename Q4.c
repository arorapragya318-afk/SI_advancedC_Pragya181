//find missing number in array
//Problem Description Given an array containing n-1 distinct numbers taken from the range 1 to n, find the one number that is missing. 
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    int sum = 0;
    printf("Enter %d elements: ", n - 1);
    for(i = 0; i < n - 1; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    int missing = total - sum;
    printf("Missing number is: %d\n", missing);
    return 0;
}