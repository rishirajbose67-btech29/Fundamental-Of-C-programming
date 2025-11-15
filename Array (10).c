#include <stdio.h>

int main() {
    int a[10], n, i, j, shift;
    char direction;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    printf("Enter direction (L for Left, R for Right): ");
    scanf(" %c", &direction);

    int result[10]; 
    for(i = 0; i < 10; i++) {
        result[i] = 0;
    }

    if(direction == 'L' || direction == 'l') {
        for(i = 0; i < 10; i++) {
            if(i + shift < 10)
                result[i] = a[i + shift];
        }
    } 
    else if(direction == 'R' || direction == 'r') {
        for(i = 9; i >= 0; i--) {
            if(i - shift >= 0)
                result[i] = a[i - shift];
        }
    } 
    else {
        printf("Invalid direction! Use L or R.\n");
        return 0;
    }

    printf("\nArray after shifting:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
