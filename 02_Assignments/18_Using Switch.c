#include<stdio.h>
#include<conio.h>
int main()
{

    int Day =0;
    printf("\n Enter number (1 to 7) = ");
    scanf("%d",&Day);

    switch(Day)
       {

         case 1:
             printf("\n Monday");
             break;

         case 2:
             printf("\n Tuesday");
             break;

         case 3:
             printf("\n Wednesday");
             break;

         case 4:
             printf("\n Thursday");
             break;

         case 5:
             printf("\n Friday");
             break;

         case 6:
             printf("\n Saturday");
             break;

         case 7:
             printf("\n Sunday");
             break;

         default :
            printf("\n Inavalid input");
            break;
       }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
