#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bill[5] = {}, Count = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Bill No %d :",i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] == 0)
        {
            Count++;
        }
    }
    printf("\n======================================================================");
    getch();

    printf("\n\n All bills find zero value bills number => %d ",Count);
    printf("\n\n Thanks");
    getch();
    return 0;
}
