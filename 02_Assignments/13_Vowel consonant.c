#include<stdio.h>
#include<conio.h>
int main()
{

    char Ch='\0';
    printf("Enter the character = ");
    scanf("%c",&Ch);

    if ((Ch =='A') || (Ch =='a') || (Ch =='E') || (Ch =='e') || (Ch =='I') || (Ch =='i') || (Ch =='O') || (Ch =='o') || (Ch =='U') || (Ch =='u'))
    {
        printf("\n The character %c vowel",Ch);
    }
    else if ((Ch >= 'a' && Ch <= 'z') || (Ch >= 'A' && Ch <= 'Z'))
    {
        printf("\n The character %c is consonant",Ch);
    }
    else
    {
        printf("\n The character %c is not Alphabet",Ch);
    }

    getch();

    printf("\n\n Thanks for visiting");

    getch();
    return 0;

}
