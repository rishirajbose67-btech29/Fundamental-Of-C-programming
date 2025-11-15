#include <stdio.h>

int main() {
    float a,b;
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);

    float p,q,r,s;
    p=a+b;
    q=a-b;
    r=a*b;
    s=a/b;

    printf("The sum of both number is %.2f\n",p);
    printf("The difference of both number is %.2f\n",q);
    printf("The product of both number is %.2f\n",r);
    printf("The division of both number is %.2f\n",s);


    return 0;
}
