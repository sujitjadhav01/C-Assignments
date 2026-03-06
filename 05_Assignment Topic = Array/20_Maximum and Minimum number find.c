#include<stdio.h>
#include<conio.h>

int main()
{
    int i, Bill[10] = {}, Max = 0, Min = 0;


    for(i = 0; i < 10; i++)
    {
        printf("\n\n Enter Bills value %d : ",i+1);
        scanf("%d", &Bill[i]);
    }

    Max = Bill[0];
    Min = Bill[0];

    for(i = 1; i < 10; i++)
    {
        if(Bill[i] > Max)
        {
            Max = Bill[i];
        }
        else if (Bill[i] < Min)
        {
            Min = Bill[i];
        }
    }
    getch();

    printf("\n\n Maximum Bill in array = %d", Max);
    printf("\n\n Minimum Bill in array = %d", Min);
    getch();
    return 0;
}

