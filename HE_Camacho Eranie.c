#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;
    float amount;

    // Loop repeats until user chooses choice 4 (Exit)
    while (1) {
        printf("BSIT BANK\n");
        printf("Please Select your Transaction\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user choice
        if (choice == 1) {
            printf("\nYour current balance: P%.2f\n\n", balance);
        } 
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("P%.2f deposited successfully!\n\n", amount);
            } else {
                printf("Invalid deposit amount.\n\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            
            // Validation: Ensure account retains at least P100.00 after withdrawal
            if ((balance - amount) < 100.00) {
                printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n\n");
            } else if (amount <= 0) {
                printf("Invalid withdrawal amount.\n\n");
            } else {
                balance -= amount;
                printf("You withdrew P%.2f successfully!\n\n", amount);
            }
        } 
        else if (choice == 4) {
            // Exit the infinite loop
            break;
        } 
        else {
            printf("Invalid choice! Please select 1, 2, 3, or 4.\n\n");
        }
    }

    return 0;
}
