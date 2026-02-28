#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int main()
{
    int i = 0, Bill[size] = {}, Even = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n\n Enter Bill value %d :",i+1);
        scanf("%d",&Bill[size]);

        if(Bill[size] % 2 == 0)
        {
            Even++;
        }
    }
    getch();
    printf("\n=======================================================================");

    printf("\n\n In these bills even values bills => %d",Even);
    getch();
    return 0;
}
