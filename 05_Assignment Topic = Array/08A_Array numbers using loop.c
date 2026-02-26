#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Value [5] = {};

    for(i = 0;i < 5 ; i++)
    {
        printf("\n\n Enter number : ");
        scanf("%d",&Value[i]);
    }

    printf("\n\n Arrange the numbers \n");
    getch();

    for(i = 0;i < 5; i++)
    {
        printf("\n\n Array number :%d",Value[i]);
    }

    getch();
    return 0;
}
