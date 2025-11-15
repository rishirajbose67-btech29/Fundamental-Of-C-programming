#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "w"); 
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    printf("Enter text (type 'end' to stop):\n");
    getchar();  
    while (1) {
        gets(line);  
        if (strcmp(line, "end") == 0)
            break;
        fputs(line, fp);   
        fputc('\n', fp);   
    }

    fclose(fp);
    printf("Data successfully written to %s\n", filename);

    return 0;
}
