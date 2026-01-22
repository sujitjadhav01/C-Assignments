#include<stdio.h>
#include<conio.h>
int main()
{

    float Fah=0.0, cel=0.0;

    printf("Enter the fahrenheit temperature = ");
    scanf("%f",&Fah);

    cel=(Fah-32.0)*(5.0/9.0);

    printf("Convert the fahrenheit to celsius = %0.2f",cel);
    return 0;

}
