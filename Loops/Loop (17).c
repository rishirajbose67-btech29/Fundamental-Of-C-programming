#include <stdio.h>

int main() {
    int i, sum = 0;

    for(i = 1; i <= 100; i++) {
        if(i % 3 == 0)
            sum = sum + i;
    }

    printf("Sum of all numbers between 1 and 100 divisible by 3 = %d", sum);

    return 0;
}
