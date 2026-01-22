#include<stdio.h>
#include<conio.h>
int main()
{

    float Side=0.0, Area=0.0;

    printf("Enter the side length of square= ");
    scanf("%f",&Side);

    Area= Side * Side;

    printf("\n calculate the area = %0.2f",Area);
    return 0;

}
