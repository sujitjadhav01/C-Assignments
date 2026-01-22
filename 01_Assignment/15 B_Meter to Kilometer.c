#include<stdio.h>
#include<conio.h>
int main()
{

    float Meter=0.0, Kilometer=0.0;

    printf("Enter the Meter = ");
    scanf("%f",&Meter);

    Kilometer= Meter / 1000;

    printf("Convert to meter to kilometer = %0.2f",Kilometer);
    return 0;
}
