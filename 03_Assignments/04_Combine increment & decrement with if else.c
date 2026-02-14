#include<stdio.h>
#include<conio.h>
int main()
{

    int spt = 0, ept = 0;
    printf("\n Enter starting number = ");
    scanf("%d",&spt);
    printf("\n Enter ending number = ");
    scanf("%d",&ept);

    if(spt <= ept)
    {
        for(;spt <= ept; spt++)
        {
            printf("\n %d",spt);
        }
    }
    else
    {
        for( ;spt >= ept; spt--)
        {
            printf("\n %d",spt);
        }
    }

    printf("\n\n Thanks");
    getch();
    return 0;


}
