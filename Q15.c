//median of two sorted arrays
//Problem Description Given two sorted numerical arrays, find the overall median of the combined collections in optimal logarithmic time. 
#include <stdio.h>
int main()
 {
    int n1, n2, i, j, temp;
    printf("enter number of elements in array 1");
    scanf("%d", &n1);
    int a[n1];
    printf("enter elements of array 1");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
printf("enter number of elements in array 2");
    scanf("%d", &n2);
    int b[n2];
printf("enter elements of array 2");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int n = n1 + n2;
    int c[n];
    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];
    for(i = 0; i < n - 1; i++)
     {
        for(j = i + 1; j < n; j++)
         {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    if(n % 2 == 0)
        printf("Median = %f", (c[n/2 - 1] + c[n/2]) / 2.0);
    else
        printf("Median = %d", c[n/2]);
    return 0;
}