#include <stdio.h>

void fibonacci(int a, int b, int n) {
    if (n == 0) return;
    printf("%d ", a);
    fibonacci(b, a + b, n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    fibonacci(1, 1, n);
    return 0;
}
