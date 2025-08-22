#include <stdio.h>

int main() {
    int numbers[8];
    int smallest, largest;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (i == 0) {  
            smallest = largest = numbers[i];
        } else {
            if (numbers[i] < smallest) {
                smallest = numbers[i];
            }
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
        }
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}
