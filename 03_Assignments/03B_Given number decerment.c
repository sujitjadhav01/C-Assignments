#include<stdio.h>
#include<conio.h>
int main()
{
    int spt = 0, ept = 0;
    printf("\n Enter starting number = ");
    scanf("%d",&spt);
    printf("\n Enter ending number = ");
    scanf("%d",&ept);


    for( ;spt <= ept; ept--)
    {

        printf("\n %d",ept);
    }
    getch();

    printf("\n\n Thanks");
    getch();
    return 0;

}
