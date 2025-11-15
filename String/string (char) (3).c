#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int a=0, e=0, i_count=0, o=0, u=0;

    printf("Enter a string: ");
    gets(str);  
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if(ch == 'a') a++;
        else if(ch == 'e') e++;
        else if(ch == 'i') i_count++;
        else if(ch == 'o') o++;
        else if(ch == 'u') u++;
    }

    printf("\nFrequency of each vowel:\n");
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", i_count);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    return 0;
}
