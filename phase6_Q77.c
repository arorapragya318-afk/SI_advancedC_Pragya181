//Trapping Rain Water Problem
#include <stdio.h>
int main()
{
int h[] = {3, 0, 2, 0, 4};
int n = 5;
int i, j;
int left, right;
int water = 0;
for(i = 1; i < n - 1; i++)
{
left = h[i];
right = h[i];
for(j = 0; j < i; j++)
{
if(h[j] > left)
left = h[j];
}
for(j = i + 1; j < n; j++)
{
if(h[j] > right)
right = h[j];
}
if(left < right)
    water = water + (left - h[i]);
else
    water = water + (right - h[i]);
}
printf("Water Trapped = %d", water);
return 0;
}