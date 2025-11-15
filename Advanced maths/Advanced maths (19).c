#include <stdio.h>

void printEven(int n, int count) {
    if (count > 10) return;
    printf("%d ", n);
    printEven(n + 2, count + 1);
}

int main() {
    printEven(2, 1);
    return 0;
}

