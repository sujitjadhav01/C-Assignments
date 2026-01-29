#include<stdio.h>
#include<conio.h>
int main()
{
    int Year =0;
    printf("Enter the Year = ");
    scanf("%d",&Year);

    if (Year >= 999 ==0 || Year <= 9999 ==0 )
    {
        printf("\n Year is not vallide");
    }
    else if (Year % 4 ==0)
    {
        printf("\n Given %d Year is leap",Year);
    }
    else
    {
        printf("\n Given %d Year is not leap",Year);
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
