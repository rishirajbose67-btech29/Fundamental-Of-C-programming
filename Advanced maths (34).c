#include <stdio.h>

void countBG(char sex[], int n, int *b, int *g) {
    if (n == 0) return;
    if (sex[n - 1] == 'B' || sex[n - 1] == 'b') (*b)++;
    else if (sex[n - 1] == 'G' || sex[n - 1] == 'g') (*g)++;
    countBG(sex, n - 1, b, g);
}

int main() {
    char sex[50];
    int i, boys = 0, girls = 0;
    printf("Enter sex code (B/G) for 50 students:\n");
    for (i = 0; i < 50; i++) scanf(" %c", &sex[i]);
    countBG(sex, 50, &boys, &girls);
    printf("Boys = %d\nGirls = %d", boys, girls);
    return 0;
}
