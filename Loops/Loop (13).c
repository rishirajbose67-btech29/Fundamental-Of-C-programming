#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter number 1: ");
    scanf("%d", &num);

    largest = smallest = num; 
    for(i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }

    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d", smallest);

    return 0;
}
