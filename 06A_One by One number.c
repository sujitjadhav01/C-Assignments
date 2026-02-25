#include<stdio.h>
#include<conio.h>
int main()
{

    int num [5] = {};

    printf("\n Enter first array number => ");
    scanf("%d",&num[0]);
    printf("\n Enter second array number => ");
    scanf("%d",&num[1]);
    printf("\n Enter third array number => ");
    scanf("%d",&num[2]);
    printf("\n Enter forth array number => ");
    scanf("%d",&num[3]);
    printf("\n Enter fifth array number => ");
    scanf("%d",&num[4]);

    printf("\n\n Arrange the numbers by array ");
    getch();

    printf("\n First array    : %d ", num [0]);
    printf("\n Second array   : %d ", num [1]);
    printf("\n Third array    : %d ", num [2]);
    printf("\n Forth array    : %d ", num [3]);
    printf("\n Fifth array    : %d ", num [4]);

    getch();
    return 0;
}
