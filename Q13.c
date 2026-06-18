//dutch national flag algorithm
//Problem Description Given an array containing only 0s, 1s, and 2s, sort the elements in linear time O(N) and constant space O(1) without using library sort functions. 
#include <stdio.h>
int main()
 {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while(mid <= high)
     {
        if(arr[mid] == 0) 
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
         {
            mid++;
        }
        else
         { 
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    return 0;
}
