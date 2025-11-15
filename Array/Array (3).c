#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count, i;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("\nMinimum number of notes required:\n");

    for(i = 0; i < 9; i++) {
        count = amount / notes[i]; 
        if(count != 0) {
            printf("%d note(s) of Rs. %d\n", count, notes[i]);
        }
        amount = amount % notes[i]; 
    }

    return 0;
}
