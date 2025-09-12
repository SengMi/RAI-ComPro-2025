#include <stdio.h>

int main() {
    int numbers[5];
    int *ptr = numbers;

    // Step 1: Read 5 integers
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
    }

    // Step 2: Bubble sort using pointer arithmetic
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Step 3: Print sorted numbers
    printf("Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
