#include<stdio.h>
#include<conio.h>
int main()
{

    int i = 0, j = 0, R = 0, C = 0;

    printf("\n Enter the number => ");
    scanf("%d",&R);
    printf("\n Enter the number => ");
    scanf("%d",&C);

    printf("\n\n=========================================================================================\n\n");

    for(i = 1; i <= R; i++)              /// outer for = Row define
    {

        for(j = 1; j <= C; j++)          /// inner for = column define
        {

            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
