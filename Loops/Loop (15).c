#include <stdio.h>

int main() {
    int i;
    char gender;
    int boys = 0, girls = 0;

    printf("Enter gender of 50 students (B for boy, G for girl):\n");

    for(i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &gender); 
        if(gender == 'B' || gender == 'b')
            boys++;
        else if(gender == 'G' || gender == 'g')
            girls++;
        else
            printf("Invalid input! Please enter B or G.\n");
    }

    printf("\nTotal Boys = %d", boys);
    printf("\nTotal Girls = %d", girls);

    return 0;
}
