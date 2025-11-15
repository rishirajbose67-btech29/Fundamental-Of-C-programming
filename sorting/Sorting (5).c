#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};


void transaction(struct Customer c[], int n, int acc, float amt, int code) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(c[i].acc_no == acc) {
            found = 1;
            if(code == 1) { 
                c[i].balance += amt;
                printf("\nRs. %.2f deposited successfully!\n", amt);
                printf("Updated Balance for %s (Acc %d): %.2f\n",
                       c[i].name, c[i].acc_no, c[i].balance);
            }
            else if(code == 0) { 
                if(c[i].balance < amt)
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                else {
                    c[i].balance -= amt;
                    printf("\nRs. %.2f withdrawn successfully!\n", amt);
                    printf("Updated Balance for %s (Acc %d): %.2f\n",
                           c[i].name, c[i].acc_no, c[i].balance);
                }
            }
            break;
        }
    }
    if(!found)
        printf("\nAccount number not found!\n");
}

int main() {
    struct Customer c[10];
    int i, acc_no, code;
    float amt;

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

    printf("\nEnter transaction details:\n");
    printf("Account Number: ");
    scanf("%d", &acc_no);
    printf("Amount: ");
    scanf("%f", &amt);
    printf("Enter Code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);

    transaction(c, 10, acc_no, amt, code);

    return 0;
}
