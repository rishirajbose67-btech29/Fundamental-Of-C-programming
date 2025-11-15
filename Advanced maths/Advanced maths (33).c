#include <stdio.h>

void countPNZ(int arr[], int n, int *p, int *neg, int *z) {
    if (n == 0) return;
    if (arr[n - 1] > 0) (*p)++;
    else if (arr[n - 1] < 0) (*neg)++;
    else (*z)++;
    countPNZ(arr, n - 1, p, neg, z);
}

int main() {
    int arr[200], i, pos = 0, neg = 0, zero = 0;
    printf("Enter 200 values:\n");
    for (i = 0; i < 200; i++) scanf("%d", &arr[i]);
    countPNZ(arr, 200, &pos, &neg, &zero);
    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);
    return 0;
}
