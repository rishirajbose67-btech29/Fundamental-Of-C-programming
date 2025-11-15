#include <stdio.h>

void printEven(int n, int i, int count) {
    if (count > n) return;
    printf("%d ", i);
    printEven(n, i + 2, count + 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printEven(n, 2, 1);
    return 0;
}
