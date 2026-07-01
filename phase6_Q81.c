//The Celebrity Problem
/*problem description-You are given n people at a party, numbered from 0 to n - 1, and a function:
knows(a, b)
which returns:
true if person a knows person b.
false otherwise.
A celebrity is a person who:
Is known by everyone else at the party.
Knows no one else.
Your task is to determine whether a celebrity exists. If a celebrity is present, return their index; otherwise, return -1.
The challenge is to identify the celebrity while minimizing the number of calls to the knows() function.*/
#include <stdio.h>
int main()
{
int a[3][3] = {
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0}
};
int i, j, celebrity = -1;
for(i = 0; i < 3; i++)
{
int knows = 0;
int known = 0;
for(j = 0; j < 3; j++)
{
if(a[i][j] == 1)
knows++;
if(a[j][i] == 1)
known++;
}
if(knows == 0 && known == 2)
{
celebrity = i;
break;
}
    }
if(celebrity == -1)
    printf("No Celebrity");
else
    printf("Celebrity is Person %d", celebrity);
return 0;
}