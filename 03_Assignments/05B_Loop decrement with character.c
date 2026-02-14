#include<stdio.h>
#include<conio.h>
int main()
{

    char ch = '\0';

    for(ch = 'N'; ch >= 'A'; ch --)
    {

        printf("\n %c",ch);
    }
    getch();

    printf("\n\n Thanks");
    getch();
    return 0;

}
