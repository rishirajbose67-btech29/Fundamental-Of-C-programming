#include <stdio.h>

void printN(int n, int i) {
    if (i > n) return;
    printf("%d ", i);
    printN(n, i + 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printN(n, 1);
    return 0;
}
