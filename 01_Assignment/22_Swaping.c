#include<stdio.h>
#include<conio.h>
int main()
{

    int A = 0, B = 0, C = 0,Temp;

    printf("\n Enter value of A = ");
    scanf("%d",&A);
    printf("\n Enter value of B = ");
    scanf("%d",&B);
    printf("\n Enter value of C = ");
    scanf("%d",&C);

    printf("\n Befor swaping \n value of A = %d \n value of B = %d \n value of C = %d",A,B,C);

    Temp = C;
    C = B;
    B = A;
    A = Temp;

    getch();

    printf("\n After swaping \n value of A = %d \n value of B = %d \n value of C = %d",A,B,C);

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}

