#include <stdio.h>

void printDigits(int n) {
    if (n == 0) return;
    int d = n % 10;
    printDigits(n / 10);
    printf("%d ", d);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printDigits(n);
    return 0;
}
