#include <stdio.h>

int main() {
    int a[20], n, num, pos, i;

    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position where you want to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the new number to insert: ");
    scanf("%d", &num);

    
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num; 
    n++;

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
