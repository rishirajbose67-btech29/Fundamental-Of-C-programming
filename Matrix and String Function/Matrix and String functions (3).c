#include <stdio.h>

int main() {
    char books[3][50];     
    char *ptr[3];          
    int i;

    printf("Enter names of 3 books:\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        gets(books[i]);    
        ptr[i] = books[i]; 
    }

    printf("\nList of books entered:\n");
    for(i = 0; i < 3; i++) {
        printf("%s\n", ptr[i]); 
    }

    return 0;
}
