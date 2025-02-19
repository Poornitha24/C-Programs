#include <stdio.h>

// Function to handle ATM transactions
void atmTransaction(int choice, int *balance) {
    int amount;

    switch (choice) {
        case 1: // Withdraw Money
            printf("Enter Amount to Withdraw: ");
            scanf("%d", &amount);
            if (amount > 0 && amount <= *balance) {
                *balance -= amount;
                printf("Transaction Successful. Remaining Balance: ₹%d\n", *balance);
            } else {
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            break;

        case 2: // Deposit Money
            printf("Enter Amount to Deposit: ");
            scanf("%d", &amount);
            if (amount > 0) {
                *balance += amount;
                printf("Transaction Successful. New Balance: ₹%d\n", *balance);
            } else {
                printf("Invalid Deposit Amount!\n");
            }
            break;

        case 3: // Check Balance
            printf("Your Current Balance: ₹%d\n", *balance);
            break;

        default:
            printf("Invalid Choice! Please try again.\n");
    }
}

int main() {
    int choice;
    int balance = 10000; // Initial balance

    // Display ATM menu
    printf("Enter your choice:\n");
    printf("1. Withdraw\n2. Deposit\n3. Check Balance\n");
    printf("Choice: ");
    scanf("%d", &choice);

    // Call function for ATM transaction
    atmTransaction(choice, &balance);

    return 0;
}
