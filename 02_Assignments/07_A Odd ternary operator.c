#include<stdio.h>
#include<conio.h>
int main()
{

    int No=0;
    printf("Enter the number = ");
    scanf("%d",&No);


    (No % 2 ==0)? printf("\n %d is Even number",No): printf("\n %d is Odd number",No);

    getch();


    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
