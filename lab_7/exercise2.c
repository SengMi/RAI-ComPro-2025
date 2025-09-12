#include <stdio.h>

void swap(float *x, float *y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    float x, y;

    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("Enter value of y: ");
    scanf("%f", &y);

    swap(&x, &y);

    printf("After swapping: x = %.2f, y = %.2f\n", x, y);
    return 0;
}
