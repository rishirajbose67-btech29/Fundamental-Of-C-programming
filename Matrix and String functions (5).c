#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, r, c1;

    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &r, &c1);

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    printf("\nAddition of two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

   
    printf("\nSubtraction of two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // ---------- MULTIPLICATION ----------
    printf("\nMultiplication of two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            c[i][j] = 0;
            for(k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
