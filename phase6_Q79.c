//Floyd' Circle-Finding Algorithm ( Loop Detection ) / Expression Evaluator
#include <stdio.h>
int main()
{
int slow = 0, fast = 0;
int arr[] = {1, 2, 3, 4, 2};   
while (1)
{
slow = arr[slow];
fast = arr[arr[fast]];
if (slow == fast)
{
printf("Loop Detected");
break;
}
 }
return 0;
}

