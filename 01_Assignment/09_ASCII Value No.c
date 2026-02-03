#include<stdio.h>
#include<conio.h>
int main()
{
    int  ASCII;
    char Ch ='\0';
    printf("\n Enter ASCII value = ");
    scanf("%d",&ASCII);

       Ch = ASCII;
       printf("\n The character of ASCII value %d = %c",ASCII,Ch);


    printf("\n\n Thanks for visiting");
    getch();
    return 0;
}
