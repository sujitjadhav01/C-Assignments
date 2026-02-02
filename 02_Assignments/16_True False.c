#include<stdio.h>
#include<conio.h>
int main()
{

    char Ch = '\0';
    printf("Enter character = ");
    scanf("%c",&Ch);

    if ((Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z'))
    {
        printf("\n True");
    }
    else
    {
        printf("\n False");
    }

    getch();

    printf("\n\n Thanks for visiting");
    getch();
    return 0;

}
