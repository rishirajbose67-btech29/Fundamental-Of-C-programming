#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int armstrong(int n, int power) {
    if (n == 0) return 0;
    return pow(n % 10, power) + armstrong(n / 10, power);
}

int main() {
    int n, p;
    printf("Enter number: ");
    scanf("%d", &n);
    p = countDigits(n);
    if (n == armstrong(n, p))
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}
