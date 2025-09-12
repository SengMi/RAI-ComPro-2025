#include <stdio.h>

int main() {
    int A[3][3];
    int *ptr;
    ptr = &A[0][0]; 

    for (int i = 0; i < 9; i++) {
        *(ptr + i) = i + 1;
    }

    printf("3x3 Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}
