#include<stdio.h>
#include<conio.h>
int main()
{

    int No=0;
    printf("Enter the number = ");
    scanf("%d",&No);

    if (No == 0)
    {
        printf("\n The value is zero");
    }
    else if (No % 2 ==0)
    {
        printf("\n %d is even number",No);
    }
    else
    {
        printf("\n %d is odd number",No);
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
