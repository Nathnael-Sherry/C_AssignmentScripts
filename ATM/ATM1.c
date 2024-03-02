#include <stdio.h>

unsigned long amount = 1000; // Initialize the amount with some random value
int pin = 1234; // Initialize the pin with some random value

void check_balance() {
    printf("Your current balance is: %lu\n", amount);
}

void withdraw_cash() {
    int cash;
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &cash);

    if (cash % 100 != 0) {
        printf("The amount should be a multiple of 100.\n");
        return;
    }

    if (cash > amount) {
        printf("Insufficient balance.\n");
        return;
    }

    amount -= cash;
    printf("You have successfully withdrawn %d.\n", cash);
    printf("Your new balance is: %lu\n", amount);
}

void deposit_cash() {
    int cash;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &cash);

    amount += cash;
    printf("You have successfully deposited %d.\n", cash);
    printf("Your new balance is: %lu\n", amount);
}

int main() {
    int choice;

    while (1) {
        printf("ATM Management System\n");
        printf("=====================\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("=====================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                withdraw_cash();
                break;
            case 3:
                deposit_cash();
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter again.\n");
                break;
        }
    }

    return 0;
}