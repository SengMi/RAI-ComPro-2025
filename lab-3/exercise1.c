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

    switch (choice) {
        case 1:
            printf("Ans: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Ans: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Ans: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Ans: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error: Cannot divide by zero\n");
            break;
        case 5:
            printf("Ans: %d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
