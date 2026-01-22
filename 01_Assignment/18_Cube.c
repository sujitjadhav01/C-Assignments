#include<stdio.h>
#include<conio.h>
int main()
{

     float No=0.0, Cube=0.0;

     printf("Enter the number = ");
     scanf("%f",&No);

     Cube= No * No * No;

     printf("Calculate the cube of given number = %0.2f",Cube);
     return 0;
}
