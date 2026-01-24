#include<stdio.h>
#include<conio.h>
int main()
{

    int N1, N2;
    printf("\n Enter 1st number = ");
    scanf("%d",&N1);

    printf("\n Enter 2nd number = ");
    scanf("%d",&N2);

    if (N1 == N2)
    {
        printf("\n\n Both numbers are equal");
    }
    else if (N1 > N2)
    {
        printf("\n %d is Maximum number",N1);
    }
    else if (N2 > N1)
    {
        printf("\n %d is Maximum number",N2);
    }

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
