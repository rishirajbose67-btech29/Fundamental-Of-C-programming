#include <stdio.h>

int main() {
    int a[10], n, num, i;

    printf("Enter number of elements (max 9): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the new number to insert at the beginning: ");
    scanf("%d", &num);

    
    for(i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = num; 
    n++;        

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
