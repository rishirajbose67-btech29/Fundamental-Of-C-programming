#include <stdio.h>
int main(){
    float a,b,c ;
    printf("enter numerator : ");
    scanf("%f", &a);

    printf("enter denominator : ");
    scanf("%f",&b);

    c=a/b;

    printf(" The answer is  %.2f",c );

    return 0;
}
