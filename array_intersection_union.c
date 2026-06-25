//WAP to take 2 arrays from a user and find the (i) intersection (ii) union (iii) find those element those are present in array 2 but not in one (iv) check if there is any common element then print the sum of both the arrays index 
#include<stdio.h>
int main()
{
    int i , j ,n1,n2;
    printf("enter size of array 1:");
    scanf("%d",&n1);
     int arr1[n1];
    printf("enter elements of array 1 :");
    for(i=0;i<n1;i++)
    {
scanf("%d",&arr1[i]);
    }
    printf("enter size of array 2 :");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter elements of array 2 :");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("intersection elements are :");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    return 0;
}
    