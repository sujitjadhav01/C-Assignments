#include<stdio.h>
#include<conio.h>

int main()
{
    int i, Bill[5] = {}, max = 0;


    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Bills value %d : ",i+1);
        scanf("%d", &Bill[i]);
    }

    max = Bill[0];

    for(i = 1; i < 5; i++)
    {
        if(Bill[i] > max)
        {
            max = Bill[i];
        }
    }
    getch();

    printf("\n\n Maximum Bill in array = %d", max);
    getch();
    return 0;
}
















