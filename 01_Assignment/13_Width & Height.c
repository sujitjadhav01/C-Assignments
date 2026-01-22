#include<stdio.h>
#include<conio.h>
int main()
{

    float Width=0.0, Height=0.0, Area=0.0;

    printf("Enter the Width= ");
    scanf("%f",&Width);

    printf("Enter the Height= ");
    scanf("%f",&Height);

    Area= Width * Height;

    printf("\ncalculate the area = %0.f",Area);
    return 0;
}
