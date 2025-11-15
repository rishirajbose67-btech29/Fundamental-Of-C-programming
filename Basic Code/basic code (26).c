#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the marks in physics : ");
    scanf("%d",&a);

    printf("Enter the marks in chemistry : ");
    scanf("%d",&b);

    printf("Enter the marks in maths : ");
    scanf("%d",&c);

    int p,q;
    p=a+b+c;
    q= a/3+ b/3+ c/3;

    printf("The sum of marks is %d\n",p);
    printf("The average of all subjects is %d\n", q);





    return 0;
}
