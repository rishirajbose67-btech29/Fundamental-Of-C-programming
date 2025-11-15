#include <stdio.h>

float sumMean(int a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sumMean(a, n - 1);
}

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    float s = sumMean(a, 10);
    printf("Sum = %.0f, Mean = %.2f", s, s / 10);
    return 0;
}
