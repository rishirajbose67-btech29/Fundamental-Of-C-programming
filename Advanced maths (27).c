#include <stdio.h>

void printName(int n) {
    if (n > 5) return;
    printf("Purv\n");
    printName(n + 1);
}

int main() {
    printName(1);
    return 0;
}
