#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;


    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operation (+, -, *, /): ");

    scanf(" %c", &operation);


    switch(operation) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0.0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}

