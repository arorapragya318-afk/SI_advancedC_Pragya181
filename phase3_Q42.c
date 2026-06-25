//Merge 2 arrays
#include <stdio.h>
int main()
{
    int a[10], b[10], n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for(i = 0; i < n1; i++)
    scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for(i = 0; i < n2; i++)
    scanf("%d", &b[i]);
    printf("Merged array:\n");
    for(i = 0; i < n1; i++)
    printf("%d ", a[i]);
    for(i = 0; i < n2; i++)
    printf("%d ", b[i]);
    return 0;
}