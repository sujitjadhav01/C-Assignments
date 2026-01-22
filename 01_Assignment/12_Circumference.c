#include<stdio.h>
#include<conio.h>
int main()
{

    float Rad=0.0, circum=0.0;

    printf("Enter the Radius: ");
    scanf("%f",&Rad);

    circum= 2 * 3.14 * Rad;

    printf("Calculate the circumference=%0.2f",circum);
    return 0;

}
