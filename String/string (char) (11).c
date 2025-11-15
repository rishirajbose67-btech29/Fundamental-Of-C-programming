#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, len, flag = 0;

    printf("Enter a string: ");
    gets(str);  

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\nThe string is a Palindrome.\n");
    else
        printf("\nThe string is NOT a Palindrome.\n");

    return 0;
}
