#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bill[5] = {}, Amount = 0, Count = 0;

    for(i = 0; i < 5; i++)
    {
         printf("\n\n Enter Bills No %d : ",i+1);
         scanf("%d",&Bill[i]);
    }
    getch();
    printf("\n\n Enter Find value amount => ");
    scanf("%d",&Amount);

    for(i = 0; i < 5; i++)
    {
        if(Bill[i] == Amount)
        {
            Count++;
        }
    }
    printf("\n==========================================================================");
    getch();

    printf("\n\n This value repets how many times in the bills => %d ",Count);
    printf("\n\n Thanks");
    getch();
    return 0;


}
