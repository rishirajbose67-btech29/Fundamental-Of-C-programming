#include <stdio.h>

void printNatural(int n) {
    if (n > 10) return;
    printf("%d ", n);
    printNatural(n + 1);
}

int main() {
    printNatural(1);
    return 0;
}
