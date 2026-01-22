#include<stdio.h>
#include<conio.h>
int main()
{

    float Kilometer=0.0, Meter=0.0;

    printf("Enter the kilometer= ");
    scanf("%f",&Kilometer);

    Meter= Kilometer * 1000;

    printf("Convert the kilometer to Meter= %0.2f",Meter);
    return 0;
}
