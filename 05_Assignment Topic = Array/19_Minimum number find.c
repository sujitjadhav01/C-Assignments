#include<stdio.h>
#include<conio.h>

int main()
{
    int i, Bill[8] = {}, Min = 0;


    for(i = 0; i < 8; i++)
    {
        printf("\n\n Enter Bills value %d : ",i+1);
        scanf("%d", &Bill[i]);
    }

    Min = Bill[0];

    for(i = 1; i < 8; i++)
    {
        if(Bill[i] < Min)
        {
            Min = Bill[i];
        }
    }
    getch();

    printf("\n\n Maximum Bill in array = %d", Min);
    getch();
    return 0;
}
