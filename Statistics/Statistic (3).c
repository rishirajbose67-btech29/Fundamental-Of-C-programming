#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];   

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");  
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    printf("\n--- File Content ---\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  
    }

    fclose(fp);
    printf("\n--- End of File ---\n");

    return 0;
}
