#include <stdio.h>


void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside function after swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    swap(x, y); 

    printf("\nAfter function call: x = %d, y = %d\n", x, y);

    return 0;
}
