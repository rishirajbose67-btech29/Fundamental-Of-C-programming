#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", b);
        next = a + b;  
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
