#include <stdio.h>

int main() {
    int a[20], n, i;

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    n--;

    printf("\nArray after deleting last element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
