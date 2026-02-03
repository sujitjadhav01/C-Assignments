#include<stdio.h>
#include<conio.h>
int main()
{

    char Ch ='\0';
    printf("Enter the character = ");
    scanf("%c",&Ch);

    if (Ch >=65 && Ch <= 90 )
    {
        printf("\n The ASCII value is %c=\t%d",Ch,Ch);
    }
    else
    {
        printf("\n Character is invalid");
    }

    getch();

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
