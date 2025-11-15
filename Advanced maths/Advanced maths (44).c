#include <stdio.h>

int sumFactors(int n, int i) {
    if (i > n / 2) return 0;
    if (n % i == 0)
        return i + sumFactors(n, i + 1);
    else
        return sumFactors(n, i + 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (sumFactors(n, 1) == n)
        printf("Perfect number");
    else
        printf("Not perfect");
    return 0;
}
