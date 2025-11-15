#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int isAutomorphic(int n) {
    int sq = n * n;
    int d = countDigits(n);
    int mod = pow(10, d);
    return (sq % mod == n);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (isAutomorphic(n))
        printf("Automorphic");
    else
        printf("Not Automorphic");
    return 0;
}
