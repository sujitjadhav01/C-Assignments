#include<stdio.h>
#include<conio.h>
int main()
{
    float Rad=0.0, area=0.0;

    printf("Enter the number: ");
    scanf("%f",&Rad);

    area= 3.14 * Rad * Rad;

    printf("\n calculate the area=%0.2f",area);
    return 0;
}

