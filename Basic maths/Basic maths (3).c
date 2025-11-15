#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter gross salary : ");
    scanf("%f",&a);

    if (a>10000)
    {b=a/10;
        printf("\n The allowance is : %f",b);
        c=a*3/100;
        printf("\n The deduction is : %f",c);
    }
    else if (a>5000&&a<10000)
    {
        b=a*7/100;
        printf("\n The allowance is : %f",b);
        c=a*2/100;
        printf("\n The deduction is : %f",c);
    }
    printf("\n The net salary is %f",a+b-c);



    return 0;
}