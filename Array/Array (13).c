#include <stdio.h>

int main() {
    int a[20], n, num, i;

    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the new number to insert at the last position: ");
    scanf("%d", &num);

    a[n] = num;  
    n++;        

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
