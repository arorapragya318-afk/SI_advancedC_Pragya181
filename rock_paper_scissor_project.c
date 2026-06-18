//ROCK PAPER SCISSOR 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //0=rock,1=paper,2=scissor
    int usermove,compmove;
    while(1)
    {
        printf("\n Enter your move : \t 0 for rock \t 1 for paper \t 2 for  scissor \t 9 to exit : ");
        scanf("%d",&usermove);
        compmove = rand() % 3 ; //0,1,2
        if(usermove==9)
        {
            exit(1);
        }
        else if (usermove==0 && compmove==1)
        printf("\n The might computer has bested you! \t Paper beats Rock");
        else if (usermove==0 && compmove==2)
        printf("\n You have defeated the computer ! \t Rock beats Scissor");
        else if (usermove==1 && compmove==0)
        printf("\n You have defeated the computer ! \t Paper beats Rock");
        else if (usermove==1 && compmove==2)
        printf("\n The might computer has bested you! \t Scissor beats Paper");
         else if (usermove==2 && compmove==0)
        printf("\n The might computer has bested you! \t Rock beats Scissor");
        else if (usermove==2 && compmove==1)
        printf("\n You have defeated the computer ! \t Scissor beats Paper");
        else 
        {
            printf("SHOOT,Its a draw!");
        }
    }
    return 0;
}
