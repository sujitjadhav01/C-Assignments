#include <stdio.h>
#include<conio.h>

float getPI() {
    return 3.14;
}

int main() {
    float pi;


    pi = getPI();

    printf("Value of PI = %.2f\n", pi);

    return 0;
}
