#include <stdio.h>

void divBy5(int n) {
    if (n > 100) return;
    if (n % 5 == 0) printf("%d ", n);
    divBy5(n + 1);
}

int main() {
    divBy5(1);
    return 0;
}
