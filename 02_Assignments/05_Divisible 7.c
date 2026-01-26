#include<stdio.h>
#include<conio.h>
int main()
{

    int No =0;

    printf("\n Enter the number =");
    scanf("%d",&No);

    if (No / 7)
    {
        printf("\n The %d is divisible 7",No);
    }
    else
    {
        printf("\n The %d is Not divisible 7",No);
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
