#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int search, count = 0;
    printf("Enter number to search: ");
    if (scanf("%d", &search) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    if (count > 0) {
        printf("Element %d occurs %d time%s\n", search, count, (count > 1) ? "s" : "");
    } else {
        printf("Element %d not found\n", search);
    }

    return 0;
}
