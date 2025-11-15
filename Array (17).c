#include <stdio.h>

int main() {
    int a[20], n, value, i, j, found = 0;

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(a[i] == value) {
            
            for(j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;     
            found = 1;
            break;   
        }
    }

    if(found) {
        printf("\nArray after deleting %d:\n", value);
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("\nValue not found in the array.\n");
    }

    return 0;
}
