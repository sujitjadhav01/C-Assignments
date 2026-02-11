#include<stdio.h>
#include<conio.h>
int main ()
{

    int A = 0, B = 0, Temp;

    printf("\n Enter  value of A = ");
    scanf("%d",&A);
    printf("\n Enter  value of B = ");
    scanf("%d",&B);

    printf("\n before swaping \n   value of A = %d \n  value of B = %d",A,B);

    Temp = A;
    A = B;
    B = Temp;

    getch();

    printf("\n\n  After swaping \n  value of A = %d ,\n  value of B = %d",A,B);

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
