#include<stdio.h>
#include<conio.h>
int main()
{

    int No=0;
    printf("Enter the value = ");
    scanf("%d",&No);

    if (No == 0)
    {
        printf("\n The number is invalide");
    }
    else if (No > 0)
    {
        printf("\n %d is positive number",No);
    }
    else
    {
        printf("\n %d is negative number",No);
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
