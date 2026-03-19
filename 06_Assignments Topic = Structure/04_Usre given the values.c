#include<stdio.h>
#include<conio.h>

struct product
{
    int id;
    char product_name[10];
    float product_p_price;
    float product_s_price;
};
int main()
{
    struct product p1;

    printf("\n\t Enter product Details ");
    printf("\n\n Enter product id : ");
    scanf("%d",&p1.id);
    printf("\n\n Enter product name : ");
    scanf("%s",&p1.product_name);
    printf("\n\n Enter product pre price : ");
    scanf("%f",&p1.product_p_price);
    printf("\n\n Enter product sell price : ");
    scanf("%f",&p1.product_s_price);
    getch();

    printf("\n\t Display the product details ");
    getch();
    printf("\n\n product id : %d ",p1.id);
    printf("\n product name : %s ",p1.product_name);
    printf("\n product pri price : %f ",p1.product_p_price);
    printf("\n product sell price : %f ",p1.product_s_price);
    getch();
    printf("\n\n Thanks for visiting ");
    return 0;
}
