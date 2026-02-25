#include<stdio.h>
#include<conio.h>
int main ()
{

    char ch [6] = {};

    printf("\n\n Enter the first character => ");
    ch [0] = getche();
    printf("\n\n Enter the second character => ");
    ch [1] = getche();
    printf("\n\n Enter the third character => ");
    ch [2] = getche();
    printf("\n\n Enter the forth character => ");
    ch [3] = getche();
    printf("\n\n Enter the fifth character => ");
    ch [4] = getche();
    printf("\n\n Enter the six character => ");
    ch [5] = getche();

    printf("\n\n Arrange the array type ");
    getch();

    printf("\n\n First character    : %c",ch[0]);
    printf("\n\n Second character   : %c",ch[1]);
    printf("\n\n Third character    : %c",ch[2]);
    printf("\n\n Forth character    : %c",ch[3]);
    printf("\n\n Fifth character    : %c",ch[4]);
    printf("\n\n Six character      : %c",ch[5]);
    getch();
    return 0;
}
