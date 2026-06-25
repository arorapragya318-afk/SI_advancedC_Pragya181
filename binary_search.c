//binary search
#include <stdio.h>

int main()
{
    int lb = 0, ub = 9, mid, s, i, a[10];

    printf("Enter 10 elements in ascending order:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter data to be searched: ");
    scanf("%d", &s);

    while(lb <= ub)
    {
        mid = (lb + ub) / 2;

        if(a[mid] == s)
        {
            printf("Data found");
            break;
        }
        else if(s > a[mid])
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }

    if(lb > ub)
    {
        printf("Data not found");
    }

    return 0;
}
        
    