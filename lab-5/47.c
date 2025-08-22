#include <stdio.h>

int main() {
    int i, j;
    int A[3][3] = {
        {1, -1, 2},
        {0,  2, 4},
        {-1, 3, 5}
    };

    printf("Original Matrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 3; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    printf("\nTranspose of Matrix A (stored in A):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
