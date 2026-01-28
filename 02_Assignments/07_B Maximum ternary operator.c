#include<stdio.h>
#include<conio.h>
int main()
{

    int No1=0, No2=0;
    printf("\n Enter first number = ");
    scanf("%d",&No1);

    printf("\n Enter second number = ");
    scanf("%d",&No2);


    (No1 == No2)? printf("\n Both numbers are equal"): ((No1 > No2)? printf("\n %d is maximum number",No1): printf("\n %d is maximum number",No2) );


    getch();

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
