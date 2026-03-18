#include<stdio.h>
#include<conio.h>
struct product
{
    int id;
    char name[10];
    float product_p_price;
    float product_s_price;
};
int main()
{
    struct product p1 = {};

    printf("\n\n product id : %d",p1.id);
    printf("\n\n product name : %s",p1.name);
    printf("\n\n product product p price : %f",p1.product_p_price);
    printf("\n\n product product s price : %f",p1.product_s_price);
    getch();
    return 0;



}
