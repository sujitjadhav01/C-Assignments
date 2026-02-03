#include <stdio.h>
#include<conio.h>

int main()
{
    int Ch ='\0';

    printf("\n Alphbate ASCII Table");
    scanf("%c",&Ch);

    for  (Ch = 0;  Ch <= 127; Ch++)
    {
        printf("%d \t %c\n", Ch, Ch);
    }

    printf("\n\n Thanks fo visiting");
    getch();

    return 0;
}
