#include <stdio.h>
#include <string.h>
int main(){

    char str[] = "";
    printf("Enter any string: ");
    scanf("%s",str);
    int length = strlen(str);
    printf("the length of string is : %d",length);

    return 0;
    
}