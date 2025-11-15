#include <stdio.h>

int main() {
    int main grams, kilograms;

   
    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    
    kilograms = grams / 1000;

    
    printf("Weight in kilograms: %.3f kg\n", kilograms);

    return 0;
}