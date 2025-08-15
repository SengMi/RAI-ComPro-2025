#include <stdio.h>

int main() {
double balance = 0.0; int choice;
    double amount;

 do {
        printf("\n===== ATM MENU =====\n");
     printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
      printf("3. Withdraw Money\n");
  printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;
 case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

     case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                } else if (amount > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
