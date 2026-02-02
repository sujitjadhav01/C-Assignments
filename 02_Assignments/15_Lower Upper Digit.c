#include<stdio.h>
#include<conio.h>
int main()
{

    char Ch = '\0';
    printf("\n Enter the character = ");
    scanf("%c",&Ch);

    if (Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n Character is upper case");
    }
    else if (Ch >= 'a' && Ch <= 'z')
    {
        printf("\n Cherecter is lower case");
    }
    else if (Ch >= '0' && Ch <= '9')
    {
        printf("\n It is Digit");
    }
    else
    {
        printf("\n This is spical symbol");
    }

    getch();

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}

