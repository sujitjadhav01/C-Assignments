#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bill[5] = {}, Billsum = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Bill No %d :",i+1);
        scanf("%d",&Bill[i]);

        Billsum += Bill[i];
    }
    printf("\n===============================================================================");
    getch();

    printf("\n\n All Bills sum =>%d",Billsum);
    printf("\n\n Thanks");
    getch();
    return 0;
}
