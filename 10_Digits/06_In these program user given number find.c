#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Cnt = 0, Dig = 0, SeaDig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);

        printf("\n\n Enter a Digit : ");
        scanf("%d",&SeaDig);

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == SeaDig)
            {
                Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n %d Digit Count in Given Number %d = %d ", SeaDig, No, Cnt);

        _getch();
        return 0;
}
