#include <stdio.h>

void printOdd(int n, int count) {
    if (count > 10) return;
    printf("%d ", n);
    printOdd(n + 2, count + 1);
}

int main() {
    printOdd(1, 1);
    return 0;
}
