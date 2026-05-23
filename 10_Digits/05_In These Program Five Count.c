#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, CntOf5 = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == 5)
            {
                CntOf5++;
            }

            Temp = Temp / 10;
        }

        printf("\n 7 Count in Given Number %d = %d.", No, CntOf5);

        _getch();
        return 0;
}
