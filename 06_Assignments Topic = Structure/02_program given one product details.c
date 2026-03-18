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
    struct product p1 = {21,"laptop",45000.0,48250.0};

    printf("\n\n Product details ");
    getch();
    printf("\n\n product id : %d ",p1.id);
    printf("\n\n product name : %s ",p1.name);
    printf("\n\n product p price : %.2f ",p1.product_p_price);
    printf("\n\n product sell price : %.2f ",p1.product_s_price);
    getch();
    printf("\n\n Thanks for visiting ");
    getch();
    return 0;
}
