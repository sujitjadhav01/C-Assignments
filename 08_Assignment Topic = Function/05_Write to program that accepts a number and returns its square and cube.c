#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, square, cube;

    printf("Enter a number: ");
    scanf("%d",&num);

    square = num * num;
    cube = num * num * num;

    printf("Square = %d\n", square);
    printf("Cube = %d", cube);

    getch();

    return 0;
}
