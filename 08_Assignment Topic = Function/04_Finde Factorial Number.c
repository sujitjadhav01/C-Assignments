#include<stdio.h>
#include<conio.h>

int main()
{
    int N, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d",&N);

    for(i = 1; i <= N; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    getch();

    return 0;
}
