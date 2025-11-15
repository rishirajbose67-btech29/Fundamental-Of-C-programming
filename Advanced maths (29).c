#include <stdio.h>

int sumDiv13(int n) {
    if (n > 100) return 0;
    if (n % 13 == 0)
        return n + sumDiv13(n + 1);
    else
        return sumDiv13(n + 1);
}

int main() {
    printf("Sum = %d", sumDiv13(1));
    return 0;
}
