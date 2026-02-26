#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, Bill[5] = {}, ecnt = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Bill No %d :",i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] % 2 == 0)
        {
            ecnt++;
        }
    }
    printf("\n============================================================================");
    getch();

    printf("\n\n All Bills Even No is :%d",ecnt);
    printf("\n\n Thanks");
    getch();
    return 0;

}
