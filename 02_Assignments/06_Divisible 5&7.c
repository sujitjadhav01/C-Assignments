#include<stdio.h>
#include<conio.h>
int main()
{

    int No =0;
    printf("\n Enter the number =");
    scanf("%d",&No);

    if (No %5 ==0 && No % 7 ==0)
    {

        printf("\n %d is divisible 5 and 7",No);
    }
    else
    {
        printf("\n %d is not divisible 5 and 7",No);
    }

    getch();

    printf("\n\n Thanks for visiting");

    getch();
    return 0;


}
