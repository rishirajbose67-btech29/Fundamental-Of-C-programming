#include <stdio.h>

float sumMean(int a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sumMean(a, n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    float s = sumMean(a, n);
    printf("Sum = %.0f, Mean = %.2f", s, s / n);
    return 0;
}
