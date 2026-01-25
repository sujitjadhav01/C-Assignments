#include<stdio.h>
#include<conio.h>
int main()
{

    int Roll =0;
    char Name [10];
    char course [10];
    char City [10];

    printf("\n Enter roll number =");
    scanf("%d",&Roll);

    printf("\n Enter name =");
    scanf("%s",Name);

    printf("\n Enter course =");
    scanf("%s",course);

    printf("\n Enter city =");
    scanf("%s",City);

    getch();

    printf("\n Enter Roll number  :%d\n",Roll);
    printf("\n Name               :%s\n",Name);
    printf("\n course             :%s\n",course);
    printf("\n City               %s\n",City);

    getch();

    printf("\n\n Thanks");
    return 0;
}
