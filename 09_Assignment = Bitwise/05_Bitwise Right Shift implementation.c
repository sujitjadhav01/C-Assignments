#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, cnt = 0, Res = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);
    printf("\n Enter a cnt  Number = ");
    scanf("%d",&cnt);

    printf("\n============================================\n");

    Res = No >> cnt;

    printf("\n Result => %d >> %d = %d.", No, cnt , Res);

    printf("\n\n============================================\n");

    getch();
    return 0;
}
