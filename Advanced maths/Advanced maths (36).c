#include <stdio.h>

int sumDiv3(int n) {
    if (n > 100) return 0;
    if (n % 3 == 0)
        return n + sumDiv3(n + 1);
    else
        return sumDiv3(n + 1);
}

int main() {
    printf("Sum = %d", sumDiv3(1));
    return 0;
}
