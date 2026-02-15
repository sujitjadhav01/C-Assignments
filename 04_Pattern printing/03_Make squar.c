#include<stdio.h>
#include<conio.h>
int main()
{

    int i = 0, j = 0, RC = 0;

    printf("\n Enter the number => ");
    scanf("%d",&RC);

    printf("\n\n================================================================\n\n");

    for(i = 1; i <= RC; i++)
    {

        for(j = 1; j <= RC; j++)
        {

            if (i == 1 || i == RC || j == 1 || j == RC)
            {

                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n Thanks");

    getch();
    return 0;
}
