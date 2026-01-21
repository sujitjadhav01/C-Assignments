#include<stdio.h>
#include<conio.h>
int main()
{
    int phy, chem, math;
    int total;
    float percentage;

    printf("Marks in physic: ");
    scanf("%d",&phy);

    printf("Marks in chemistry: ");
    scanf("%d",&chem);

    printf("Marks in maths: ");
    scanf("%d",&math);

     total= phy + chem + math;
    percentage=total/3.0;


    printf("\n total marks=%d",total);
    printf("\n percentage=%.2f",percentage);

    return 0;
}

