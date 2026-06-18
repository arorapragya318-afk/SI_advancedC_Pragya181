//maximum subarray sum (kadane's algorithm)
//Problem Description Find the contiguous subarray within a one-dimensional numerical array which has the largest sum. 
#include<stdio.h>
int main()
{
    int arr[10],n,currentsum=0,maxsum=0;
    printf("\n Enter size of array");
    scanf("%d",&n);
    printf("\n Enter elements of array");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
      currentsum=maxsum=arr[0];
    for(int i=1;i<n;i++)
    {
        if(currentsum+arr[i]>arr[i])
        currentsum=currentsum+arr[i];
        else
        currentsum=arr[i];
        if(currentsum>maxsum)
        maxsum=currentsum;
    }
    printf("subarray with maximum sum is %d",maxsum);
    return 0;
}
