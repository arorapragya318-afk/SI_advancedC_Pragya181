//Rotate an array left or right by N positions.
#include <stdio.h>
int main() 
{
    int arr[100], n, pos, i, temp[100];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter positions to rotate left: ");
    scanf("%d", &pos);
    pos = pos % n;  
    for(i = 0; i < n; i++) 
    {
        temp[i] = arr[(i + pos) % n];
    }
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", temp[i]);
    }
    return 0;
}