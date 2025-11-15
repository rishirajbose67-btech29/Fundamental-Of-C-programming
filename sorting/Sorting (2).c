#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};


void printNames(struct Student s[], int n) {
    int i;
    printf("\nList of all student names:\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, s[i].name);
    }
}

int main() {
    struct Student s[10];
    int i;

    printf("Enter details of 10 students:\n");
    for(i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);
        getchar();  
        printf("Name: ");
        gets(s[i].name);
        printf("Course Name: ");
        gets(s[i].course);
        printf("Major Subject: ");
        gets(s[i].major);
        printf("Minor Subject: ");
        gets(s[i].minor);
    }

   

    return 0;
}
