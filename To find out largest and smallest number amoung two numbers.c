#include<stdio.h>
int main() {
     int num1, num2;

     printf("Enter the first number:");
     scanf("%d", &num2);

     printf("Enter the second number:");
     scanf("%d", &num1);

     if(num1>num2){
     printf("The larger number is: %d\n",num1);

     printf("The smaller number is: %d\n",num2);
     }
     else if(num1<num2) {


     printf("The larger number is: %d\n",num2);

     printf("The smaller number is: %d\n",num1);
     }
     else{

        printf("Both numbers are equal.\n");
        }

        return 0; }
