#include <stdio.h>

void printOdd(int n, int i, int count) {
    if (count > n) return;
    printf("%d ", i);
    printOdd(n, i + 2, count + 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printOdd(n, 1, 1);
    return 0;
}
