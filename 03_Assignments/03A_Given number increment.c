#include<stdio.h>
#include<conio.h>
int main()
{

    int spt = 0, ept = 0;
    printf("\n Enter starting value = ");
    scanf("%d",&spt);
    printf("\n Enter ending value = ");
    scanf("%d",&ept);

    for ( ;spt <= ept; spt++)
    {
        printf("\n %d",spt);
    }
    getch();

    printf("\n\n Thanks");
    getch();
    return 0;

}
