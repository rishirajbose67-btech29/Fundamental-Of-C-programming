#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value in $ :");
    scanf("%f", &a);

    b=a*48;

    printf("the value in Rs. is %.2f \n", b);

    c=b/70;
    printf("the value in pound is %.2f\n",c);


    return 0;
}
