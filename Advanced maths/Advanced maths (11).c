#include <stdio.h>

int power(int a, int b) {
    int result = 1, i;
    for(i = 1; i <= b; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    int base, exp, ans;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    ans = power(base, exp);

    printf("\n%d raised to the power %d = %d\n", base, exp, ans);

    return 0;
}
