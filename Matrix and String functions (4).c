#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    gets(name);  

    len = strlen(name);

    printf("\nAbbreviated name: ");

    
    printf("%c.", name[0]);

    
    for(i = 1; i < len; i++) {
       
        if(name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
      
            int j = i + 1;
            int spaceCount = 0;

          
            for(; j < len; j++) {
                if(name[j] == ' ')
                    spaceCount++;
            }

            if(spaceCount > 0)
                printf("%c.", name[i + 1]);
            else {
            
                printf(" %s", &name[i + 1]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
