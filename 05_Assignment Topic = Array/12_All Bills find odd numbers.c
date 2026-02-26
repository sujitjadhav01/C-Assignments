#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bill[5] = {}, ocnt = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Bills No %d :",i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] % 2 == 1)
        {
            ocnt++;
        }
    }
    printf("\n=======================================================================");
    getch();

    printf("\n\n All Bills Odd number is => %d",ocnt);
    printf("\n\n Thanks");
    getch();
    return 0;
}
