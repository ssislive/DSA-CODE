#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack for transaction history
char stack[MAX][50];
int top = -1;

// Function to push transaction into stack
void push(char transaction[]) {
    if (top == MAX - 1) {
        printf("Transaction history is full!\n");
        return;
    }
    top++;
    strcpy(stack[top], transaction);
}

// Function to display transaction history
void displayHistory() {
    if (top == -1) {
        printf("No transactions yet.\n");
        return;
    }
    printf("\n--- Transaction History ---\n");
    for (int i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }
}

// Main function
int main() {
    int balance = 10000; // initial balance
    int choice, amount;
    char transaction[50];

    while (1) {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Transaction History\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Current Balance: Rs%d\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Invalid amount!\n");
            }
            else if (amount > balance) {
                printf("Insufficient balance!\n");
            }
            else {
                balance -= amount;
                printf("Withdrawal successful! Remaining Balance: Rs%d\n", balance);

                sprintf(transaction, "Withdrawn: Rs%d | Balance: Rs%d", amount, balance);
                push(transaction);
            }
            break;

        case 3:
            displayHistory();
            break;

        case 4:
            printf("Thank you for using ATM!\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}