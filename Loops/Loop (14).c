#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for(i = 1; i <= 200; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nTotal Positive Numbers = %d", positive);
    printf("\nTotal Negative Numbers = %d", negative);
    printf("\nTotal Zeros = %d", zero);

    return 0;
}
