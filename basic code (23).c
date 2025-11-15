#include <stdio.h>

int main() {
    float h,l,a;

    
    printf("Enter the height of triangle : ");
    scanf("%f", &h);
    printf("Enter the length of triangle : ");
    scanf("%f",&l);



    a = 0.5*h*l;

    printf("The area of the triangle is: %.2f\n", a);

    return 0;
}
