#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100] = "students.csv";
    int rollno;
    char name[100];
    char choice;

    fp = fopen(filename, "w"); 
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    fprintf(fp, "Roll No,Name\n");

    do {
        printf("\nEnter Roll No: ");
        scanf("%d", &rollno);
        getchar(); 

        printf("Enter Name: ");
        gets(name); 

        fprintf(fp, "%d,%s\n", rollno, name);

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("\nData successfully saved to %s\n", filename);
    printf("You can open this file directly in MS Excel.\n");

    return 0;
}
