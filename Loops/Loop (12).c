#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%f", &num); 
        sum = sum + num;     
    }

    mean = sum / n;  

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
