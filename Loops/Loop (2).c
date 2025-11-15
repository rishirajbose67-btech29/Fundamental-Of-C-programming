#include <stdio.h>
int main(){
    int n,i=0;
    printf("Enter th value of n : ");
    scanf("%d", &n);
    do
    {
        if(i%2!=0)
        printf("\n%d",i);
        i++;

    } while (i<2*n+1);
    
    return 0;
}