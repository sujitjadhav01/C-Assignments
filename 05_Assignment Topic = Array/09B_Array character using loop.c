#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '\0', Ch [4] = {};

    for(i = 0; i < 4; i++)
    {
        printf("\n\n Enter character : ");
        Ch [i] = getche();
    }

    printf("\n\n Arrange the character \n");
    getch();

    for(i = 0; i < 4; i++)
    {
        printf("\n\n Arrange character :%c",Ch[i]);
    }

    getch();
    return 0;
}
