//Majority Element (>N/3 times) 
//Problem Description Find all elements in an integer array of size N that appear strictly more than ⌊N/3⌋ times. 
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
    int found = 0;
    for(int i = 0; i < n; i++)
     {
        int count = 0;
        int p = 0;
        for(int k = 0; k < i; k++) 
        {
            if(arr[k] == arr[i]) 
            {
                p = 1;
                break;
            }
        }
        if(p)
            continue;
        for(int j = 0; j < n; j++)
         {
            if(arr[j] == arr[i])
                count++;
        }
        if(count > n / 3) 
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if(!found)
        printf("No majority element");
    return 0;
}