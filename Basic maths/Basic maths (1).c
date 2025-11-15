#include <stdio.h>
int main(){
    int a,b ;
    printf("Enter first value : ");
    scanf("%d", &a );

    printf("Enter second value : ");
    scanf("%d", &b);

    if ( a > b)
    {
    printf("%d is greater than %d ", a,b);
    }
    else 
    {
        printf("%d is less than %d " , a,b);
    }

    return 0;
} 