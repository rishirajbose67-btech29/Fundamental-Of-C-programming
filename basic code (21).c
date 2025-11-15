#include <stdio.h>
int main(){
    int a,b;
    printf("Enter length of rectangle -");
    scanf("%d",&a);
    printf("Enter breadth of rectangle-");
    scanf("%d",&b);
    int c,d;
    c= 2*a + 2*b ;
    d= a*b;
    
    printf("The perimeter of rectangle is %d \n",c );
    printf("The area of rectangle is %d", d);


        return 0;
    }

  

