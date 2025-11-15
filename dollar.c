#include <stdio.h>

int main() {
    int dollars, rupees;

    
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    
    rupees = dollars * 48;

  
    printf("%.2f Dollar(s) = %.2f Rupees\n", dollars, rupees);

    return 0;
}
