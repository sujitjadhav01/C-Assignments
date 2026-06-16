#include<stdio.h>
#include<conio.h>
int main()
{

    char spt = '\0', ept = '\0';
    printf("\n\n Enter starting point = ");
    spt = getche();
    printf("\n\n Enter ending point = ");
    ept = getche();

    for( ; spt <= ept; spt ++)
    {
        printf("\n %c",spt);
    }
    getche();

    printf("\n\n Thanks");
    getch();
    return 0;
}
