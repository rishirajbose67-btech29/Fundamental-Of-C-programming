#include <stdio.h>
#include <string.h>

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

void printStudentData(struct Student s[], int n, int roll) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(s[i].rollno == roll) {
            printf("\nStudent Details:\n");
            printf("Roll Number: %d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].course);
            printf("Major: %s\n", s[i].major);
            printf("Minor: %s\n", s[i].minor);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("\nNo student found with roll number %d.\n", roll);
}

int main() {
    struct Student s[10];
    int i, searchRoll;

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

    
    printNames(s, 10);

    
    printf("\nEnter roll number to view student details: ");
    scanf("%d", &searchRoll);

    printStudentData(s, 10, searchRoll);

    return 0;
}
