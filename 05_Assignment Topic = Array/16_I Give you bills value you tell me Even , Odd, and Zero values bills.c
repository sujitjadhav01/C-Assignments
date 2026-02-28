#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0, Bill[10] = {}, Even = 0, Odd = 0, Zero = 0;

    for(i = 0; i < 10; i++)
    {
        printf("\n Enter Bill No %d :",i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] == 0)
        {
            Zero++;
        }
        else if(Bill[i] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    printf("\n===============================================================================");
    getch();

    printf("\n\n Enter Zero values bills => %d",Zero);
    printf("\n\n Enter Even values bills => %d",Even);
    printf("\n\n Enter Odd values bills => %d",Odd);
    getch();
    return 0;
}
