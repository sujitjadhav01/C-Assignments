#include<stdio.h>
#include<conio.h>
int main()
{
    char Ch = '\0';
    printf("Enter the character = ");
    scanf("%c",&Ch);

    if (Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n The %c is Upper case",Ch);
    }
    else if (Ch >= 'a' && Ch <= 'z')
    {
        printf("\n The %c is lower case",Ch);
    }
    else
    {
        printf("\n The %c is Not letter",Ch);
    }

    getch();

    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
