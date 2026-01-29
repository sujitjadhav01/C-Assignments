#include<stdio.h>
#include<conio.h>
int main()
{
    char Ch='\0';
    printf("\n Enter the character = ");
    scanf("%c",&Ch);


    if ((Ch =='A') || (Ch =='a') || (Ch =='E') || (Ch =='e') || (Ch =='I') || (Ch =='i') || (Ch =='O') || (Ch =='o') || (Ch =='U') || (Ch =='u'))
    {
        printf("\n Character %c is vowel",Ch);
    }
    else
    {
        printf("\n Character %c is not vowel",Ch);
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}


