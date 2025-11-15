#include <stdio.h>
int main(){
    char n[25];
    printf("Enter your name : ");
    scanf("%s",n);

    for(int i=1;i<=5;i++)
    {
        printf("%s\n",n);
    }
    return 0;
}