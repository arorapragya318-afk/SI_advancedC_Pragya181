//count inversions in array
//Problem Description Formally count the number of inversions in an array. Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j. 
#include <stdio.h>
int main()
 {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++)
     {
        for(int j = i + 1; j < n; j++)
         {
            if(arr[i] > arr[j])
             {
                count++;
            }
        }
    }
    printf("Number of inversions = %d\n", count);
    return 0;
}