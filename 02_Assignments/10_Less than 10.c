#include<stdio.h>
#include<conio.h>
int main()
{

    int No=0;
    printf("\n Enter the number =");
    scanf("%d",&No);

    if (No < 10 )
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n World");
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
