#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float average;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    printf("Enter details of 10 cricketers:\n");
    for(i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: ");
        gets(c[i].name);
        printf("Age: ");
        scanf("%d", &c[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &c[i].matches);
        printf("Average Runs: ");
        scanf("%f", &c[i].average);
        getchar(); \
    }

    
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(c[i].average > c[j].average) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    
    printf("\nCricketers arranged in ascending order of average runs:\n");
    printf("------------------------------------------------------\n");
    printf("%-20s %-5s %-10s %-10s\n", "Name", "Age", "Matches", "Average");
    printf("------------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        printf("%-20s %-5d %-10d %-10.2f\n", c[i].name, c[i].age, c[i].matches, c[i].average);
    }

    return 0;
}
