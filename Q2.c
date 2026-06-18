//rotate array by k position
//Problem Description Given an array, rotate the array to the right by K steps, where K is a non-negative integer. 
#include <stdio.h>
int main()
 {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d", &k);
    k = k % n;   
    for(i = 0; i < n; i++) 
    {
        temp[(i + k) % n] = arr[i];
    }
    for(i = 0; i < n; i++) 
    {
        arr[i] = temp[i];
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    return 0;
}

    