#include<stdio.h>
#include<conio.h>

int main()
{
            int i = 0, j = 0, NO = 0;

            printf("Enter Size for Pattern : ");
            scanf("%d",&NO);

            for(i = 1; i <= NO; i++ )
            {
                        for( j = 1; j <= NO; j++ )
                        {
                            if( i == 1 || i == NO || j == (NO/2)+1 )
                            {
                                    printf(" * ");
                            }
                            else
                            {
                                    printf("   ");
                            }
                        }
                        printf("\n");
            }

            printf("\n Thanks for visiting ");

            getch();
            return 0;
}
