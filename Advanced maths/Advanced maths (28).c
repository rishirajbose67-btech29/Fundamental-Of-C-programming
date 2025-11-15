#include <stdio.h>

void printName(int n, int i) {
    if (i > n) return;
    printf("Purv\n");
    printName(n, i + 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printName(n, 1);
    return 0;
}
