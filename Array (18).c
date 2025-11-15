#include <stdio.h>

int main() {
    int a[20], n, value, i, found = 0;

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(a[i] == value) {
            printf("\nValue %d found at position %d.\n", value, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\nValue %d not found in the array.\n", value);
    }

    return 0;
}
