#include <stdio.h>

int findMax(int a[], int n) {
    if (n == 1) return a[0];
    int max = findMax(a, n - 1);
    return (a[n - 1] > max) ? a[n - 1] : max;
}

int findMin(int a[], int n) {
    if (n == 1) return a[0];
    int min = findMin(a, n - 1);
    return (a[n - 1] < min) ? a[n - 1] : min;
}

int main() {
    int a[100];
    for (int i = 0; i < 100; i++) scanf("%d", &a[i]);
    printf("Max = %d\nMin = %d", findMax(a, 100), findMin(a, 100));
    return 0;
}
