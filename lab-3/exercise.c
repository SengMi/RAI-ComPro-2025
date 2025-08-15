#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("\nCalculator Menu:\n");
    printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
    printf("Choose menu: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Ans: %d + %d = %d\n", num1, num2, num1 + num2);
    else if (choice == 2)
        printf("Ans: %d - %d = %d\n", num1, num2, num1 - num2);
    else if (choice == 3)
        printf("Ans: %d * %d = %d\n", num1, num2, num1 * num2);
    else if (choice == 4) {
        if (num2 != 0)
            printf("Ans: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        else
            printf("Error: Cannot divide by zero\n");
    }
    else if (choice == 5)
        printf("Ans: %d %% %d = %d\n", num1, num2, num1 % num2);
    else
        printf("Invalid choice\n");

    return 0;
}
