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
    struct product p1 = {21,"laptop",45000.0,48250.0};
    struct product p2 = {22,"T.V",20000.0,23250.0};
    struct product p3 = {23,"fridge",25000.0,30000.0};

    printf("\n\t First product Details ");
    printf("\n\n product id : %d ",p1.id);
    printf("\n product name : %s ",p1.product_name);
    printf("\n product P price : %f ",p1.product_p_price);
    printf("\n product S price : %f ",p1.product_s_price);
    getch();

    printf("\n\n\t Second product details ");
    printf("\n\n product id : %d ",p2.id);
    printf("\n product name : %s ",p2.product_name);
    printf("\n product P price : %f ",p2.product_p_price);
    printf("\n product S price : %f ",p2.product_s_price);
    getch();

    printf("\n\n\t Third product details ");
    printf("\n\n product id : %d ",p3.id);
    printf("\n product name : %s ",p3.product_name);
    printf("\n product P price : %f ",p3.product_p_price);
    printf("\n product S price : %f ",p3.product_s_price);
    getch();
    printf("\n\n Thanks for visiting ");
    return 0;
}
