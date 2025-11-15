#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};


void printLowBalance(struct Customer c[], int n) {
    int i, found = 0;
    printf("\nCustomers with balance below Rs.100:\n");
    for(i = 0; i < n; i++) {
        if(c[i].balance < 100) {
            printf("Account No: %d\tName: %s\tBalance: %.2f\n",
                   c[i].acc_no, c[i].name, c[i].balance);
            found = 1;
        }
    }
    if(!found)
        printf("No customer has balance below Rs.100.\n");
}

int main() {
    struct Customer c[10];
    int i;

    printf("Enter details of 10 customers:\n");
    for(i = 0; i < 10; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &c[i].acc_no);
        getchar(); 
        printf("Name: ");
        gets(c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    printLowBalance(c, 10);

    return 0;
}
