#include<stdio.h>
#include<conio.h>
int main()
{

    int No1 =0;
    int No2 =0;
    int No3 =0;

    printf("\n Enter first number = ");
    scanf("%d",&No1);

    printf("\n Enter second number = ");
    scanf("%d",&No2);

    printf("\n Enter third number = ");
    scanf("%d",&No3);

    if (No1 == No2 == No3 ==0)
    {
        printf("\n Both three numbers are same");
    }

    else if (No1 >= No2 && No1 >= No3)
    {
        printf("\n Maximum number is %d ",No1);
    }
    else if (No2 >= No1 && No2 >= No3)
    {
        printf("\n Maximum number is %d ",No2);
    }
    else
    {
        printf("\n Maximum number is %d ",No3);
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
