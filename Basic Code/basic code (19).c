#include <stdio.h>

int main() {
    float P, R, N, I;

    printf("Enter Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Number of Years (N): ");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Simple Interest = %.2f\n", I);

    return 0;
}
