#include <stdio.h>
int main(){
    char n[25];
    int t;
    printf("Enter your name : ");
    scanf("%s",n);
    printf("How many times to print your name : ");
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        printf("%s\n",n);
    }
    return 0;
}