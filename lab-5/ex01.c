#include <stdio.h>

int main() {
    int values[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &values[i]);
    }

    printf("Values in array are: ");
    for (int i = 0; i < 10; i++) {
        if (i < 9)
            printf("%d, ", values[i]);
        else
            printf("%d", values[i]);
    }
    printf("\n");

    return 0;
}