#include <stdio.h>

int main() {
    int a[3][3];
    int *p;
    int i, j;
    int largest, smallest;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0]; 
    largest = smallest = *p; 

   
    for(i = 0; i < 9; i++) {
        if(*(p + i) > largest)
            largest = *(p + i);
        if(*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d\n", smallest);

    return 0;
}
